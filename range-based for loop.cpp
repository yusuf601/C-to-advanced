#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> angka = {1, 2, 3, 4, 5};

    // Menggunakan range-based for loop
    for (int x : angka) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
    /*
    Bayangkan kita punya sebuah kotak berisi beberapa buah. Dengan range-based for loop, kita bisa dengan mudah mengambil setiap buah, melihatnya, 
    dan memasukkannya ke dalam keranjang tanpa perlu menghitung jumlah buah di dalam kotak.*/
}


// for (tipe_data variabel : range) {
//     // Kode yang akan dijalankan untuk setiap elemen dalam range
// }
// tipe_data: Tipe data dari elemen-elemen dalam range.
// variabel: Nama variabel yang akan menyimpan nilai elemen saat iterasi.
// range: Ekspresi yang mewakili range, seperti nama array, vector, atau panggilan fungsi yang mengembalikan range.

