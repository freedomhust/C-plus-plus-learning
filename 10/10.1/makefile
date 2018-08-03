build : 10.2-stock00.o 10.3-usestock0.o
	g++ -o build 10.2-stock00.o 10.3-usestock0.o
10.2-stock00.o : 10.2-stock00.cpp 10.1-stock00.h
	g++ -g -c 10.2-stock00.cpp 
10.3-usestock0.o : 10.3-usestock0.cpp 10.1-stock00.h
	g++ -g -c 10.3-usestock0.cpp 
clean :
	rm 10.2-stock00.o 10.3-usestock0.o build