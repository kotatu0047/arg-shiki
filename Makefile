CFLAGS=-std=c++17 -g -static -Wall -O2   # -lstdc++
CC = g++

bin: main.o
	$(CC) $(CFLAGS) $^ -o $@

main.o: main.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

run:
	./bin 

clean: 
	rm -f *.o *~ bin

.PHONY: clean

