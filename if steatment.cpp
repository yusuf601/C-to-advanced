#include <iostream>
using namespace std;

int main(){
        string asciiArt = " __     ___    _  _____ _    _ ______ \n"
                    " \\ \\   / / |  | |/ ____| |  | |  ____|\n"
                    "  \\ \\_/ /| |  | | (___ | |  | | |__   \n"
                    "   \\   / | |  | |\___ \| |  | |  __|  \n"
                    "    | |  | |__| |____) | |__| | |     \n"
                    "    |_|   \____/|_____/ \____/|_|     \n";

    cout << asciiArt << endl;
    int a;
    int b;
    int jumlah;
    cout << "masukkan angka pertama : ";
    cin >> a;
    cout << "masukkan angka kedua : " << endl;
    cin >> b;
    jumlah = a + b;
    if (a >10 ){
        cout<< "terlalu besar!" << endl;
    }
    if (b < 1){
        cout << "masukkan bilangan bulat!";
    }
    
    cout << "hasil penjumlahan = " << jumlah << endl;

    
    return 0;
}
