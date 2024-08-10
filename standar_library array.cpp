#include <iostream>
#include <array>

using namespace std;

int main(){
    //membuat array dengan standar library
    //array<int, jumlah array> nama array

    array<int, 5> nilai;

    for (int i = 0; i < 5; i++) {
        nilai[i] = i;
        cout << "Nilai[" << i << "] = " << nilai[i] << "  Adress" << &nilai[i] << endl; 
    }

    //ukuran array
    cout << endl;
    cout << "Nilai array = " << nilai.size() << endl;
    cout << endl;
    //Adress Awal
    cout << "Adress awal = " << nilai.begin() << endl;
    cout << endl;
    //adress akhir
    cout << "Adress akhir = " << nilai.end() << endl;
    //mengambil nilai berdasarkan index
    cout << "Nilai dari array ke 2 = " << nilai.at(2) << endl;

    cin.get();
    return 0;
}
