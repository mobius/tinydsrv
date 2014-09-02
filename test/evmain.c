#include <ev.h>
#include <stdio.h>

ev_io stdin_watcher;

static void stdin_cb( EV_P_ ev_io *w, int revents )
{
  puts("stdin ready");
  ev_io_stop(EV_A_ w);
  ev_break(EV_A_ EVBREAK_ALL);
}

int main(int argc, char *argv[])
{
  struct ev_loop *loop = EV_DEFAULT;
  ev_io_init(&stdin_watcher, stdin_cb, 0, EV_READ);
  ev_io_start(loop, &stdin_watcher);

  ev_run(loop, 0);
  return 0;
}
