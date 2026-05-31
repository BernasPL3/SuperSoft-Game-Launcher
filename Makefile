CC=gcc
CFLAGS=-O2

SRC=src/main.c src/launcher.c src/games.c

all:
	$(CC) $(SRC) -o SuperSoftLauncher $(CFLAGS)

clean:
	rm -f SuperSoftLauncher
