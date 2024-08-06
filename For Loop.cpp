#include <iostream>
#include <vector>
#include <numeric> // Untuk menggunakan fungsi accumulate

using namespace std;

int main() {
    vector<int> angka;

    for (int counter = 1; counter <= 100; counter++) {
        if (counter % 2 == 0) {
            angka.push_back(counter);
        }
    }

    cout << "Bilangan genap dalam vektor:\n";
    for (int num : angka) {
        cout << num << " ";
    }
    cout << endl;

    char pilihan;
    cout << "Apakah Anda ingin menghitung total jumlah bilangan genap (Y/n)? ";
    cin >> pilihan;

    if (pilihan == 'Y' || pilihan == 'y') {
        int total = accumulate(angka.begin(), angka.end(), 0);
        cout << "Total jumlah bilangan genap: " << total << endl;
    } else if (pilihan == 'N' || pilihan == 'n') {
        cout << "Tidak menghitung total." << endl;
    } else {
        cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
