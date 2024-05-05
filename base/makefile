file: io.o
	g++ io.o -o file

io.o:  io.cpp input.txt output.txt
	    g++ -c io.cpp

clean:
	rm *.o
	rm file

run:  file
	./file
