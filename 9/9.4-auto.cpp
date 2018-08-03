#include <iostream>

void oil(int x);

int main(void){
    using namespace std;

    int texas = 31;
    int year =  2011;
    cout << "In main(), taxas = " << texas << ", &texas = " << &texas << endl;
    cout << "In main(), year = " << year << ", &year = " << &year << endl;
    oil(texas);
    cout << "In main(), taxas = " << texas << ", &texas = " << &texas << endl;
    cout << "In main(), year = " << year << ", &year = " << &year << endl;
    return 0;
}

void oil(int x){
    using namespace std;
    int texas = 5;

    cout << "in oil(), texas = " << texas << ", &texas = " << &texas << endl;
    cout << "in oil(), x = " << x << ", &x = " << &x << endl;
    {
        int texas = 113;
        cout << "in block, texas = " << texas << ", &texas = " << &texas << endl;
        cout << "in block, x = " << x << ", &x = " << &x << endl;
    }
    cout << "Post-block texas = " << texas;
    cout << ", &texas = " << &texas << endl;
}