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
    int hasil1,hasil2,hasil3;
    float hasil4;
    int a;
    int b;
    string operasi;

    cout << "masukkan nilai a yang anda inginkan: ";
    cin >> a;
    cout << " masukkan nilai b yang anda inginkan: ";
    cin >> b;
    cin.ignore();
    cout << "Masukkan operator (+, -, *, /): ";
    getline(cin, operasi);
    if (operasi == "+"){
    hasil1 = a + b;
    cout << "hasil operasi tambah = " << hasil1 << endl;
    } else if (operasi == "-")
    {
        hasil2 = a - b;
        cout << "hasil pengurangan = " << hasil2 << endl;
    } else if (operasi == "*")
    {
        hasil3 = a * b;
        cout << "hasil perkalian = " << hasil3 << endl;
    } else if (operasi == "/")
    {
        hasil4 = (float)a / b;
        cout << "hasil pembagian = " << hasil4 << endl;
    } else
    {
        cout << "operator tidak valid" << endl;
    }
    return 0;

}