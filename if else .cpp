#include <iostream>
using namespace std;

// belajar if else statement day 2
//ini untuk if else statement 
int main() {
        string asciiArt = " __     ___    _  _____ _    _ ______ \n"
                    " \\ \\   / / |  | |/ ____| |  | |  ____|\n"
                    "  \\ \\_/ /| |  | | (___ | |  | | |__   \n"
                    "   \\   / | |  | |\___ \| |  | |  __|  \n"
                    "    | |  | |__| |____) | |__| | |     \n"
                    "    |_|   \____/|_____/ \____/|_|     \n";

    cout << asciiArt << endl;

    int a;
    cout << "masukkan nilai a : ";
    cin >> a;

    if (a % 2 == 0)
    {
        cout << "ini adalah bilangan genap" << endl;
        cout << "karena bilangan " <<a << " habis di bagi 2" << endl;
        
    } else {
        cout << "ini adalah bilangan ganjil" << endl;
        cout << "karena bilangan " <<a << " tidak habis di bagi 2" << endl;
    }

    return 0;
}






