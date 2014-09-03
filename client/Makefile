LIBS = -lglfw3 -framework Cocoa -framework OpenGL -framework IOKit -framework Quartz 
TARGET = client
OBJS = main.o

client: $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $@


clean:
	rm -f *.o *~ $(TARGET)