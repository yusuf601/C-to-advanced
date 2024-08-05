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
    int a = 6;
    int b = 6;
    bool hasil1,hasil2;
    //komparasi relation exppression
    //sebanding
    hasil1 = (a == b);
    cout << "hasil perbandingan: " <<hasil1 << endl;
    //tidak sebanding
    hasil2 = (a != b);
    cout << "hasil perbadingan: " <<hasil2 << endl;
    //lebih dari
    hasil1 = (a > b);
    cout << "hasil perbandingan: " <<hasil1 << endl;
    //kuranf dari
    hasil2 = (a < b);
    cout << "hasil perbadingan: " <<hasil2 << endl;
    //lebih dari sama dengan
    hasil1 = (a >= b);
    cout << "hasil perbandingan: " <<hasil1 << endl;
    //kurang dari sama dengan
    hasil2 = (a <= b);
    cout << "hasil perbadingan: " <<hasil2 << endl;


    return 0;
}
