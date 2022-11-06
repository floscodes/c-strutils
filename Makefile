all: strutils.o

strutils.o: strutils.c strutils.h
	gcc -O0 -g -c -Wall ${CFLAGS} strutils.c -o strutils.o

clean:
	rm -rf *.o
