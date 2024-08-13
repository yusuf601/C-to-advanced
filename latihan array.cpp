#include <iostream>
#include <array>

using namespace std;
//nilai[i] = i;
//iterasi loop dimulai dari index yang dimana di mulai dari 0
int main() {
    array<int, 11> nilai;

    cout << "Menampilkan grafik nilai = " << endl << endl;

    for (int i = 0; i < nilai.size(); i++) {
        cout << "Jumlah mahasiswa dengan nilai ";
        if (i == 0) {
            cout << "0-9 = ";
        } else if (i == 10) {
            cout << "90-100: ";
        } else {
            cout << (i * 10) << " - " << (i * 10) + 9 << " : ";
        }
        cin >> nilai[i];
    }

    cout << endl;
    for (int i = 0; i < nilai.size(); i++) {
        cout << (i * 10) << " - " << (i * 10) + 9 << ": ";
        for (int j = 0; j < nilai[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
