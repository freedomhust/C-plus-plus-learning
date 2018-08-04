build : 10.8-stock20.o 10.9-usestock2.o
	g++ -o build 10.8-stock20.o 10.9-usestock2.o
10.8-stock20.o : 10.8-stock20.cpp 10.7-stock20.h
	g++ -g -c 10.8-stock20.cpp
10.9-usestock2.o : 10.9-usestock2.cpp 10.7-stock20.h
	g++ -g -c 10.9-usestock2.cpp 
clean :
	rm build 10.8-stock20.o 10.9-usestock2.o