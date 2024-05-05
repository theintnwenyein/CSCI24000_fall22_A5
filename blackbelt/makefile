io: fileio.o
	g++ fileio.o -o io

fileio.o: fileio.cpp
	g++ -c fileio.cpp

clean: rm *.o
	rm io

run: io
	./io

