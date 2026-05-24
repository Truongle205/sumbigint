CXX = g++
TARGET = sumbigint
SRC = sumbigint.cpp

.PHONY: all run clean test

all:
	$(CXX) -o $(TARGET) $(SRC)

run: all
	./$(TARGET)

test: all
	./$(TARGET) < input/input1.txt > output/output1.txt
	diff output/output1.txt expected/expected1.txt

clean:
	rm -f *.o $(TARGET) output/output*.txt
