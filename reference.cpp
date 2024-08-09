#include <iostream>
using namespace std;


int main(){
    //variabel
    int a;
    a = 5;

    cout << "Nilai a = " << a << endl;
    cout << "Adress a = " << &a << endl << endl;

    //reference
    int &b = a;

    cout << "Nilai b " << b << endl;
    cout << "Adress b = " << &b << endl;



    cin.get();
    return 0;
}