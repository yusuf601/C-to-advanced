


// #include <iostream>

// using namespace std;

// int main() {
//     int n, t1 = 0, t2 = 1, nextTerm = 0;

//     cout << "Masukkan jumlah suku deret Fibonacci: ";
//     cin >> n;

//     cout << "Deret Fibonacci: ";

//     for (int i = 1; i <= n; ++i) {
//         // Print the current term
//         cout << t1 << " ";

//         // Calculate the next term
//         nextTerm = t1 + t2;

//         // Update values
//         t1 = t2;
//         t2 = nextTerm;
//     }

//     return 0;
// }


//di bawa adalah versi yang lebih mudah di baca
//blok kode dengan CTRL + / untuk mengaktifkan code di atas
//blok code dengan CTRL + / untuk membuat code dibawah menjadi comment

#include <iostream>

using namespace std;

int main() {
    int n;

    // Minta pengguna memasukkan jumlah suku deret
    cout << "Masukkan jumlah suku deret Fibonacci: ";
    cin >> n;

    // Inisialisasi dua suku pertama
    int bilanganPertama = 0;
    int bilanganKedua = 1;

    cout << "Deret Fibonacci: ";

    // Loop untuk mencetak n suku pertama
    for (int i = 1; i <= n; ++i) {
        cout << bilanganPertama << " ";

        // Hitung suku berikutnya
        int bilanganBerikutnya = bilanganPertama + bilanganKedua;

        // Perbarui nilai untuk suku berikutnya
        bilanganPertama = bilanganKedua;
        bilanganKedua = bilanganBerikutnya;
    }

    return 0;
}

