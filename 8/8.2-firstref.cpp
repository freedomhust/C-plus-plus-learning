#include<iostream>

int main(void){
	using namespace std;
	int rats = 101;
	int & rodent = rats;
	
	cout << "rats = " << rats;
	cout << ", rodents = " << rodent << endl;
	
	rodent++;
	cout << "rats = " << rats;
	cout << ", rodents = " << rodent << endl;
	
	cout << "rats address = " << &rats << endl;
	cout << "rodent address = " << &rodent << endl;
} 
