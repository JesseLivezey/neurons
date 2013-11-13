#neurons MAKEFILE
CC = g++

bin/single: bin/single.o bin/spiking.o
	$(CC) -o bin/single bin/single.o bin/spiking.o

bin/single.o: test/single.cpp include/spiking.hpp
	$(CC) -c test/single.cpp -o bin/single.o

bin/spiking.o: src/spiking.cpp include/spiking.hpp
	$(CC) -c src/spiking.cpp -I include -o bin/spiking.o

clean:
	rm bin/single bin/single.o bin/spiking.o