#include <iostream>
using namespace std;

int main() {
    string asciiArt = " __     ___    _  _____ _    _ ______ \n"
                    " \\ \\   / / |  | |/ ____| |  | |  ____|\n"
                    "  \\ \\_/ /| |  | | (___ | |  | | |__   \n"
                    "   \\   / | |  | |\___ \| |  | |  __|  \n"
                    "    | |  | |__| |____) | |__| | |     \n"
                    "    |_|   \____/|_____/ \____/|_|     \n";

    cout << asciiArt << endl;
    int Nilai;

    cout << "Masukkan Nilai Ujian Anda: ";
    cin >> Nilai;

    switch(Nilai) {
        case 91 ... 100:
            cout << "Selamat anda mendapatkan nilai A+" << endl;
            break;
        case 81 ... 90:
            cout << "Selamat anda mendapatkan nilai B" << endl;
            break;
        // Tambahkan case lain untuk nilai C, D, E, dll.
        default:
            cout << "Nilai tidak valid" << endl;
    }

    return 0;
}
