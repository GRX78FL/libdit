CC=gcc
CFLAGS=-Wall -Wextra -O2 -shared -fPIC -ldl
SRC=hooks/*/*.c src/libdit.c
BINDIR=build
BIN=libdit.so

all:
	$(CC) $(SRC) $(CFLAGS) -o $(BINDIR)/$(BIN)
clean:
	rm $(BINDIR)/$(BIN)
