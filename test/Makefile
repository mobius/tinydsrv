OBJ = evmain.o
LIBS = -lev
CFLAGS = -Wl,-rpath=/usr/local/lib


evmain: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)
%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $<

.PHONY: clean

clean:
	rm *.o
