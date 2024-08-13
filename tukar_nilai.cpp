#include <iostream>

using namespace std;

void cetakInfoPointer(int *ptr) {
    cout << "Nilai: " << *ptr << endl;
    cout << "Alamat: " << ptr << endl << endl;
}

void tukarNilai(int *nilaiPertama, int *nilaiKedua) {
    int temp = *nilaiPertama;
    *nilaiPertama = *nilaiKedua;
    *nilaiKedua = temp;
}

int main() {
    int x = 10, y = 20;

    cout << "Sebelum tukar:\n";
    cetakInfoPointer(&x);
    cetakInfoPointer(&y);

    tukarNilai(&x, &y);

    cout << "Setelah tukar:\n";
    cetakInfoPointer(&x);
    cetakInfoPointer(&y);

    return 0;
}
