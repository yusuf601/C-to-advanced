#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;

double luas_persegi_panjang(double p, double l);
int luas_persegi(int sisi);

int main() {
    char pilihan;
    double p, l, hasil;
    int sisi, hasil2;

    cout << "Luas persegi panjang(1), Luas persegi(2) = ";
    cin >> pilihan;

    if (pilihan == '1') {
        cout << "Masukkan nilai p = ";
        cin >> p;
        cout << "Masukkan nilai l = ";
        cin >> l;

        hasil = luas_persegi_panjang(p, l);
        cout << "Luas persegi panjang = " << hasil << endl;
    } else if (pilihan == '2') {
        cout << "Masukkan panjang sisi persegi = ";
        cin >> sisi;

        hasil2 = luas_persegi(sisi);
        cout << "Luas persegi = " << hasil2 << endl;
    } else {
        cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}

double luas_persegi_panjang(double p, double l) {
    return p * l;
}

int luas_persegi(int sisi) {
    return sisi * sisi;
}