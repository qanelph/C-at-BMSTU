CC :=gcc
CFLAGS :=-std=c99 -Wall -Werror -pedantic

app.exe: main.o usage.o io.o calculatings.o memory.o
	$(CC) $(CFLAGS) -o $@ $^

test.exe: test.o memory.o calculatings.o io.o
	$(CC) $(CFLAGS) -g3 -o $@ $^

%.o: %.c *.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o *.exe