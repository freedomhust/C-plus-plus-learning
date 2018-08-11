build : quene.o bank.o
	g++ -o build quene.o bank.o
quene.o : quene.cpp quene.h
	g++ -g -c quene.cpp
bank.o : bank.cpp quene.h
	g++ -g -c bank.cpp
clean :
	rm build quene.o bank.o