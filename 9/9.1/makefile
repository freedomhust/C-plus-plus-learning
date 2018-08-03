build : file1.o file2.o
	 g++ -o build file1.o file2.o
file1.o : file1.cpp coordin.h
	g++ -g -c file1.cpp
file2.o : coordin.h file2.cpp
	g++ -g -c file2.cpp
clean :
	rm file1.o file2.o build 