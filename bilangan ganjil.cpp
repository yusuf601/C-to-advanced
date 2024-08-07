#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int n;
    int hasil = 0; // Inisialisasi hasil penjumlahan dengan 0
    int bilangan_pertama = 1;
    char pilihan;

    cout << "Masukkan nilai n = ";
    cin >> n;

    cout << "Deret bilangan ganjil: ";
    for(int i = 1; i <= n; i++) {
        cout << bilangan_pertama << " ";

        // Tambahkan bilangan_pertama ke hasil sebelum diperbarui
        hasil += bilangan_pertama;

        int bilangan_berikutnya = bilangan_pertama + 2;
        bilangan_pertama = bilangan_berikutnya;
    }

    cout << endl; // Tambahkan baris kosong untuk pemisah

    cout << "Apakah Anda ingin menghitung semua suku (Y/n)? ";
    cin >> pilihan;
    pilihan = toupper(pilihan);

    if(pilihan == 'Y') {
        cout << "Hasil penjumlahan semua suku = " << hasil << endl;
    } else {
        cout << "Pilihan tidak ditemukan." << endl;
    }

    return 0;
}
