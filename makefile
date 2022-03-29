CXX = g++
CXXFLAGS = -g -O2 -Wall -std=c++20
ERRORS = errors.txt
OUTPUT = output.txt

MAIN = main
LIB = cp
LIBPATH = ./cp-0.1.0-Linux

all:
	g++ -L$(LIBPATH)/lib/   main.cpp -I$(LIBPATH)/include/ -std=c++20 -fconcepts-ts -lcp -o lab02
	./lab02 > output.txt
