build : 9.5-external.o 9.6-support.o
	g++ -o build 9.5-external.o 9.6-support.o
9.5-external.o : 9.5-external.cpp
	g++ -g -c 9.5-external.cpp
9.6-support.o : 9.6-support.cpp
	g++ -g -c 9.6-support.cpp
clean :
	rm build 9.5-external.o 9.6-support.o