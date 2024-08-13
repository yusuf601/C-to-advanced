#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 2;
    int c = 3;
    int d = 6;
    int e = 8;
    

    //pointer
    int *aPtr; //saya mendeklarasikan sebua pointer aPtr
    aPtr = &a;  // deklarasi disini mengakibatkan pointer di arahkan ke alamat memori a
    int *bPtr = &b;
    bPtr = &b;
    int *cPtr = &c;
    cPtr = &c;
    int *dPtr = &d;
    dPtr = &d;
    int *ePtr = &e;
    ePtr = &e;
    int f = 10;
    int *fptr;  // deklarasi sempurna
    fptr = &f;

//visualisasi
/*      aPtr
       |
       v
+---+
| 10|  <-- a
+---+
*/



    //int a memiliki addres dan nilai 1 alamat

    cout << "nilai : " << a << endl;
    cout << "adress: " << &a << endl;
    cout << "adress: " << *aPtr << endl;

    cout << "nilai : " << b << endl;
    cout << "adress: " << &b << endl;

    cout << "nilai : " << c << endl;
    cout << "adress: " << &c << endl;

    cout << "nilai : " << d << endl;
    cout << "adress: " << &d << endl;

    cout << "nilai : " << e << endl;
    cout << "adress: " << &e << endl;
}