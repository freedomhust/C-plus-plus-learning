#include<iostream>

int main(void){
	using namespace std;
	
	int carrots;
	
	cout << "How many carrots do you have ?\n";
	cin >> carrots;
	cout << "Here are two more.\n";
	carrots = carrots + 2;
	cout << "Now you have " << carrots << " carrots." << endl;
}
