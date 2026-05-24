all:
	g++ -o sumbigint sumbigint.cpp
#run:
	./sumbigint
	make clean
clean:
	rm -f *.o sumbigint
