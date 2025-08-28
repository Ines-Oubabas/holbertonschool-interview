CC=gcc
CFLAGS=-Wall -Wextra -Werror -pedantic -std=gnu89 -I.

SRC=0-heap_extract.c binary_tree_print.c
HDR=binary_trees.h

all: run

run: 0-heap_extract
	./0-heap_extract

0-heap_extract: 0-main.c $(SRC) $(HDR) libheap.a
	$(CC) $(CFLAGS) -o $@ 0-main.c $(SRC) -L. -lheap

alt: main_alt.c $(SRC) $(HDR)
	$(CC) $(CFLAGS) -o test main_alt.c $(SRC)

clean:
	rm -f 0-heap_extract test

.PHONY: all run alt clean
