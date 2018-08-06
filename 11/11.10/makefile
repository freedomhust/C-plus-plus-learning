build : 11.11-mytime3.o 11.12-usetime3.o
	g++ -o build 11.11-mytime3.o 11.12-usetime3.o
11.11-mytime3.o : 11.11-mytime3.cpp 11.10-mytime3.h
	g++ -g -c 11.11-mytime3.cpp
11.12-usetime3.o : 11.12-usetime3.cpp 11.10-mytime3.h
	g++ -g -c 11.12-usetime3.cpp
clean :
	rm build 11.11-mytime3.o 11.12-usetime3.o