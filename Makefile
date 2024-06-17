CFLAGS=-std=c++1z -g -static -Wall -O2 -lstdc++
CC = g++

bin: main.o lib.o
	$(CC) $(CFLAGS) $^ -o $@

lib.o: lib.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

main.o: main.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

run:
	./bin 

clean: 
	rm -f *.o *~ bin

.PHONY: clean

