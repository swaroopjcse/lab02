CXX = g++
CXXFLAGS = -g -O2 -Wall
ERRORS=errors.txt
OUTPUT=output.txt

MAIN = main
LIB = 

all:
	g++ main.cpp > Errorlog.txt  2>&1
	./a.out < input.txt > Resultlog.txt
