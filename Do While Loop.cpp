#include <iostream>
using namespace std;

int main() {
    int a = 1;
    cout << "selamat datang " << endl;

    do {
        cout << "perulangan ke " << a << endl;
        cout << "iterasi ke " << a << endl;
        a++;
    } while (a <= 10); // Kondisi while harus ada

    cout << "selesai" << endl;
    cin.get();
    return 0;
}
