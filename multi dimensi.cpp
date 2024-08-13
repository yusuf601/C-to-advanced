#include <iostream>
#include <array>
using namespace std;

void printArray(int *ptrArray, int baris , int kolom){
    int index = 0;
    for(int i = 0; i < baris; i++){
        cout << "[";
        for(int j =  0; j < kolom; j++){
            cout << (*ptrArray + index) << " ";
            index++;
        }
        cout << "]";
    }
}

int main(){
    //array multi dimensi
    // int array[baris][kolom] = {nilai}
    //idexing dimulai dari 0
    const int kolom = 2;
    const int baris = 2;

    int arrayMD[kolom][baris] = {1,2,3,4};

    printArray(*arrayMD, baris, kolom); //

    cin.get();
    return 0;
}

// /* Pointer *arrayMD: Merupakan pintu masuk ke seluruh elemen array arrayMD.
// Argumen baris dan kolom: Memberikan informasi tentang dimensi array.
// Fungsi printArray: Menggunakan informasi ini untuk mencetak isi array secara terstruktur./*