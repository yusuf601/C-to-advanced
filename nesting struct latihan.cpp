#include <iostream>
#include <string>

struct pemain{
    std::string nama;
    int tahun_lahir;
};
struct klub{
    std::string nama_klub;
    std::string nama_stadium;
    //struc pemain

    pemain player1;
    pemain player2;

};


int main(){
    pemain uplayer1,uplayer2;
    klub klub1;
    uplayer1.nama = "Ronaldo";
    uplayer1.tahun_lahir = 2000;

    uplayer1.nama = "Batista";
    uplayer1.tahun_lahir = 2003;

    klub1.player1 = uplayer1;
    klub1.player2 = uplayer2;

    //struct klub
    klub1.nama_klub = "Arsenal";
    klub1.nama_stadium = "Emirates Stadium";
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << klub1.nama_klub << std::endl;
    std::cout << klub1.nama_stadium << std::endl;
    std::cout << klub1.player1.nama << std::endl;
    std::cout << klub1.player1.tahun_lahir << std::endl;
    std::cin.get();
    return 0;
}