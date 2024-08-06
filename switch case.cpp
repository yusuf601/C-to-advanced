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
    char huruf;
    cout << "Masukkan huruf A, B, C, D, atau E: ";
    cin >> huruf;

    switch (huruf) {
        case 'A':
            cout << "Huruf pertama di alfabet" << endl;
            break;
        case 'B':
            cout << "Huruf kedua di alfabet" << endl;
            break;
        case 'C':
            cout << "Ini adalah huruf ketiga di alfabet" << endl;
            break;
        case 'D':
            cout << "Ini adalah huruf ke empat di alfabet" << endl;
            break;
        case 'E':
            cout << "Ini adalah huruf ke lima di alfabet" << endl;
            break;
        default:
            cout << "Nilai tidak ditemukan" << endl;
            break;
    }

    return 0;
}
