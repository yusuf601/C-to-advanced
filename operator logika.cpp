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
    
    int a = 3;
    int b = 4;
    bool hasil1,hasil2;
    //operator logika ada 3 yaitu and , or , dan not
    //not
    cout << "untuk operator logika NOT \n" << endl;
    hasil1 = !(a == 3); //output false atau 0
    hasil2 = !(a == 2); // output true atau 1
    cout << hasil1 << endl;
    cout << hasil2 << endl;
    //and
    cout << "untuk operator logika AND \n" << endl;
    hasil1 = (a == 3) and (b == 4); //true dan true
    cout << hasil1 << endl;   // true
    
    hasil2 = (b == 4) and (b == 5); //true dan false
    cout << hasil2 << endl; //False atau 0
    
    //operator logika AND akan false jika salah satu atau kedua nilai false
    //OR
    cout << "untuk operator logika OR \n" << endl;
    hasil1 == (a == 5) or (b == 4); //false dan true
    cout << hasil1 << endl;
    hasil2 == (a == 5) or (b == 2); //false dan false
    cout << hasil2 << endl;
    //operator logika OR akan false jika kedua ouput false 
    


    return 0;
}
