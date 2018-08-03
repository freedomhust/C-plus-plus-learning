#include <iostream>
#include <array>
#include <string>

//using namespace std;

const int Seasons = 4;
const std::array<std::string, Seasons> Sname = 
	{"Spring", "Summer", "Fall", "Winter"};
	
void fill(std::array<double,Seasons> *pa);
void show(std::array<double,Seasons> da);

int main(void){
	std::array<double,Seasons> expenses;
	fill(&expenses);
	show(expenses);
	return 0;
}

void fill(std::array<double,Seasons> *pa){
	using namespace std;
	for(int i = 0; i < Seasons; i++){
		cout << "Enter " << Sname[i] << " expenses: ";
		cin >> (*pa)[i];
	}
}

void show(std::array<double,Seasons> da){
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENCES\n";
	for(int i = 0; i < Seasons; i++){
		cout << Sname[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
