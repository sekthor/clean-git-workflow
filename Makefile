CC=gcc
CFLAGS=-Wall -g


all: main

main: src/main.c
	$(CC) $(CFLAGS) -o $@ $<
