CXX = g++
CXXFLAGS = -g -O2 -Wall -std=c++20 -fconcepts-ts
ERRORS = errors.txt
OUTPUT = output.txt

PROG = lab02
MAIN = main
LIB = cp
LIBPATH = ./cp-0.1.0-Linux

run: $(PROG)		
	./$(PROG) # > $(OUTPUT)

$(PROG): $(MAIN).cpp
	g++ -L$(LIBPATH)/lib/ $(MAIN).cpp -I$(LIBPATH)/include/ \
		$(CXXFLAGS) -l$(LIB) -o $(PROG)


clean: 
	rm $(PROG)

.phony: run
