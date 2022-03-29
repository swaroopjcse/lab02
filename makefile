CXX = g++
CXXFLAGS = -g -O2 -Wall -std=c++20 -fconcepts-ts
ERRORS = errors.txt
OUTPUT = output.txt

PROG = lab02
MAIN = main
LIB = cp
LIBPATH = ./cp-0.1.0-Linux

all: $(PROG)		
	./$(PROG) > $(OUTPUT)

clean: 
	rm $(PROG)

.phony: all
