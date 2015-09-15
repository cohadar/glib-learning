CC=gcc
CFLAGS=-std=c99 -O2 -Wall
CINCLUDE=`pkg-config --cflags --libs glib-2.0`

main:
	$(CC) $(CINCLUDE) $(CFLAGS) main.c

run:
	./a.out
