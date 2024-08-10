#include <iostream>
using namespace std;


int main(){

    int nilai[6];
    nilai[0] = 0;
    nilai[1] = 1;
    nilai[2] = 2;
    nilai[3] = 3;
    nilai[4] = 4;
    nilai[5] = 5;
    nilai[6] = 6;

    cout << &nilai[1] << " Nilai nya adalah : " << nilai[1] << endl; 
    cout << &nilai[2] << " Nilai nya adalah : " << nilai[2] << endl; 
    cout << &nilai[3] << " Nilai nya adalah : " << nilai[3] << endl; 
    cout << &nilai[4] << " Nilai nya adalah : " << nilai[4] << endl; 
    cout << &nilai[5] << " Nilai nya adalah : " << nilai[5] << endl; 
    cout << &nilai[6] << " Nilai nya adalah : " << nilai[6] << endl; 

    int *ptr = nilai;  //manupulasi 1
    *(ptr + 2) = 6;


    nilai[3] = 5;   //manipulasi 2

    cout << endl;
    cout << &nilai[1] << " Nilai nya adalah : " << nilai[1] << endl; 
    cout << &nilai[2] << " Nilai nya adalah : " << nilai[2] << endl; 
    cout << &nilai[3] << " Nilai nya adalah : " << nilai[3] << endl; 
    cout << &nilai[4] << " Nilai nya adalah : " << nilai[4] << endl; 
    cout << &nilai[5] << " Nilai nya adalah : " << nilai[5] << endl; 
    cout << &nilai[6] << " Nilai nya adalah : " << nilai[6] << endl; 

    cout << endl;

    cout << "Nilai Array = " << sizeof(nilai) << endl;
    cout << "Jumlah member Array = " << sizeof(nilai)/sizeof(int);



    cin.get();
    return 0;
}