CC = gcc
TARGET = xenon
CFLAGS = -c -Wall
OBJS = lib/main.o lib/tokenizer.o lib/tokenstate.o lib/varenv.o lib/hashfunc.o
CPPFLAGS =	-std=c++11
CPPLINK = -lstdc++


all: $(TARGET)

xenon: $(OBJS) ; $(CC) $(CPPFLAGS) $(OBJS) -o bin/$@

lib/tokenstate.o: src/token/tokenstate.c ; $(CC) $(CFLAGS) src/token/tokenstate.c -o $@

lib/varenv.o: src/global/varenv.cpp ; $(CC) $(CPPFLAGS) $(CFLAGS) src/global/varenv.cpp -o $@ $(CPPLINK)

lib/hashfunc.o: src/global/hashfunc.c ; $(CC) $(CFLAGS) src/global/hashfunc.c -o $@

