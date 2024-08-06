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
    string a;
    cout << "masukkan peristiwa penting dalam sejarah";
    getline(cin, a);

    if (a == "Hari kemerdekaan") {
        cout << "17 agustus" << endl;
    } else if (a == "Hari pancasila")
    {
        cout << "1 Juli" << endl;
    } else
    {
        cout << "peristiwa tidak di temukan" << endl;

    }
    return 0;
}