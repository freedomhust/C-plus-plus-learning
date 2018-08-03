build : 9.12-namesp.o 9.13-namessp.o
	g++ -o build 9.12-namesp.o 9.13-namessp.o
9.12-namesp.o : 9.12-namesp.cpp 9.11-namesp.h
	g++ -g -c  9.12-namesp.cpp
9.13-namessp.o : 9.13-namessp.cpp 9.11-namesp.h
	g++ -g -c 9.13-namessp.cpp
clean :
	rm build 9.12-namesp.o 9.13-namessp.o