# Build Variables
CC := gcc


all: app module

app:
	mkdir out
	$(CC) -o ./out/kbintc ./src/app/main.c

module:
	mkdir out

install:
	echo installing

uninstall:

clean:
	rm -rf ./out