CC=g++
CFLAGS=-g -Wall -s

all: build install install-extra-cows

build:
	$(CC) $(CFLAGS) -o xcowsay src/main.cpp -L/usr/lib -lX11

install:
	cp xcowsay /usr/lib/xscreensaver
	cp xscreen-config/xcowsay.xml /usr/share/xscreensaver/config/xcowsay.xml

install-extra-cows:
	cp cows/* /usr/share/cows
