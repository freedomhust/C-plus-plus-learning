build : 10.11-stack.o 10.12-stacker.o
	g++ -o build 10.11-stack.o 10.12-stacker.o
10.11-stack.o : 10.11-stack.cpp 10.10-stack.h
	g++ -g -c 10.11-stack.cpp
10.12-stacker.o : 10.12-stacker.cpp 10.10-stack.h
	g++ -g -c 10.12-stacker.cpp 
clean :
	rm build 10.11-stack.o 10.12-stacker.o