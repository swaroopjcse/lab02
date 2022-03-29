CXX = g++
CXXFLAGS = -g -O2 -Wall -std=c++20
ERRORS = errors.txt
OUTPUT = output.txt

MAIN = main

lib: libcp.so
	$(CXX) $(CXXFLAGS) -shared -o libcp.so *.o

libcp.so: 

all:
	g++ main.cpp > Errorlog.txt  2>&1
	./a.out < input.txt > Resultlog.txt
