# Makefile

CC=gcc

all: vscdebug.exe

vscdebug.exe: ./vscdebug.c
	$(CC) -g ./vscdebug.c -o $@

.PHONY: all clean

clean:
	rm -rf ./vscdebug.exe
