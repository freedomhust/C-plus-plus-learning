build : 9.8-twofile2.o 9.7-twofile1.o
	g++ -o build 9.8-twofile2.o 9.7-twofile1.o
9.7-twofile1.o : 9.7-twofile1.cpp
	g++ -g -c 9.7-twofile1.cpp
9.8-twofile2.o : 9.8-twofile2.cpp
	g++ -g -c 9.8-twofile2.cpp
clean : 
	rm build 9.8-twofile2.o 9.7-twofile1.o