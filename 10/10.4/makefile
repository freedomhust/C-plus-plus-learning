build : 10.5-stock10.o 10.6-usestock2.o
	g++ -o build 10.5-stock10.o 10.6-usestock2.o
10.5-stock10.o : 10.5-stock10.cpp 10.4-stock10.h
	g++ -g -c 10.5-stock10.cpp
10.6-usestock2.o : 10.6-usestock2.cpp 10.4-stock10.h
	g++ -g -c 10.6-usestock2.cpp 
clean :
	rm build 10.5-stock10.o 10.6-usestock2.o