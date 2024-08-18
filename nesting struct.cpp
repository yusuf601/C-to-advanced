#include <iostream>
#include <string>

struct aktor
{
    std::string nama;
    int tahun_lahir;

};
struct film{
    std::string judul;
    int tahun;
    std::string genre;
    //struct aktor
    aktor pemeran_1;
    aktor pemereran_2;
};

int main(){
    aktor aktor1,aktor2;
    film film1;
    //aktor 1
    aktor1.nama = "yusuf";
    aktor1.tahun_lahir = 2002;
    //aktor 2
    aktor2.nama = "Reza";
    aktor2.tahun_lahir = 2000;
    //film
    film1.genre = "Horror";
    film1.judul = "Pengabdi setan";
    film1.tahun = 2020;
    film1.pemeran_1 = aktor1;
    film1.pemereran_2 = aktor2;

    // print
    std::cout << film1.judul << std::endl;
    std::cout << film1.pemeran_1.nama << std::endl;


    std::cin.get();
    return 0;
}