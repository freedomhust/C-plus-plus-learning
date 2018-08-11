build : 12.2-stringbad.o 12.3-vegnews.o
	g++ -o build 12.2-stringbad.o 12.3-vegnews.o
12.2-stringbad.o : 12.2-stringbad.cpp 12.1-stringbad.h
	g++ -g -c 12.2-stringbad.cpp
12.3-vegnews.o : 12.3-vegnews.cpp 12.1-stringbad.h
	g++ -g -c 12.3-vegnews.cpp
clean :
	rm build 12.2-stringbad.o 12.3-vegnews.o