#include <iostream>
using namespace std;


int x = 10;

int ambil_global(){
    return x;
}

int x_local(){
    auto x = 5;
    return x;
}

int main(){

    cout << "ini adalah variabel global = " << x << endl;
    int x = 8;

    cout << "ini adalah variabel lokal = " << x << endl;
    cout << "ini adalah variabel ambil_global = " << ambil_global() << endl; 
    cout << "Ini adalah variabel X_lokal = " << x_local() << endl;
    {
        //variabel block
        x = rand();
        cout << "ini adalah variabel block = " << x << endl;
    }






}

