#include <iostream>
using namespace std;

/*Deklarasi Fungsi fungsi:

int &b adalah deklarasi parameter dengan tipe reference. Ini berarti b adalah alias untuk variabel yang akan dilewatkan sebagai argumen.
Memanggil Fungsi fungsi:

fungsi(a); Memanggil fungsi fungsi dengan mengirimkan variabel a sebagai argumen. Karena b adalah reference, maka b menjadi alias untuk a di dalam fungsi.
Perubahan Nilai dalam Fungsi:

b = 10; Mengubah nilai b, tetapi karena b adalah alias untuk a, maka nilai a juga berubah menjadi 10.*/

int fungsi(int &b){
    b = 10;
    cout << "Adress b = " << &b << endl << endl;
    cout << "Nilai b = " << b << endl;

}



int main(){
    int a = 5;

    cout << "Adress a = " << &a << endl << endl;
    cout << "Nilai a = " << a << endl;
    fungsi(a);
    cout << "Nilai b = " << a << endl;



    cin.get();
    return 0;

}