CXX = g++
CXXFLAGS = -g -O2 -Wall -std=c++20
ERRORS = errors.txt
OUTPUT = output.txt

MAIN = main
LIB = cp

all:
	g++ -L./cp-0.1.0-Linux/lib -I-std=c++20 main.cpp -o lab02
	./lab02 < input.txt > output.txt

	# g++ main.cpp > Errorlog.txt  2>&1
	# ./a.out < input.txt > Resultlog.txt
