build : 11.5-mytime1.o 11.6-usetime1.o
	g++ -o build 11.5-mytime1.o 11.6-usetime1.o
11.5-mytime1.o : 11.5-mytime1.cpp 11.4-mytime1.h
	g++ -g -c 11.5-mytime1.cpp
11.6-usetime1.o : 11.6-usetime1.cpp 11.4-mytime1.h
	g++ -g -c 11.6-usetime1.cpp 
clean :
	rm build 11.5-mytime1.o 11.6-usetime1.o