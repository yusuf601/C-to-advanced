#include <iostream>

enum warna{putih, merah, coklat = 3 , hijau};
//perubahan index tidak memengaruhi index sebelum nya tapi memengaruhi index setelah nya

int main(){

    warna baju;
    baju = hijau;

    std::cout << baju << std::endl;

    if(baju == putih){
        std::cout << "Baju putih " << std::endl;
    }


    std::cin.get();
    return 0;
}