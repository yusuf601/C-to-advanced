#include <iostream>
#include <string>


int main(){

    std::string kalimat_1("real madrid juara ucl musim ini");
    std::string kalimat_2("Real Madrid mendatangkan kylian Mbappe");
    
    std::cout << "1: " << kalimat_1 << std::endl;
    std::cout << "2: " << kalimat_2 << std::endl;

    //substring,mengambil di tengah
    //substr(index,panjang)
    std::cout << kalimat_1.substr(0,4) << " ";
    std::cout << kalimat_1.substr(5,6) << std::endl;

    // mencari posisi string
    std::cout << kalimat_1.find("madrid") << std::endl;
    std::cout << kalimat_2.find("Real") << std::endl;

    int a = kalimat_1.find("a");
    std::cout << a << std::endl;
    // std::cout << kalimat_1.find(a, a+1);  menemukan rentang index yg ingin di temukan


    //mencari posisi dari belakang -> rfind
    std::cout << kalimat_2.rfind("e");


    std::cin.get();
    return 0;

}
