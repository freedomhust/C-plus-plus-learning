build : 11.2-mytime0.o 11.3-usetime0.o
	g++ -o build 11.2-mytime0.o 11.3-usetime0.o
11.2-mytime0.o : 11.2-mytime0.cpp 11.1-mytime.h
	g++ -g -c 11.2-mytime0.cpp
11.3-usetime0.o : 11.3-usetime0.cpp 11.1-mytime.h
	g++ -g -c 11.3-usetime0.cpp 
clean :
	rm build 11.2-mytime0.o 11.3-usetime0.o