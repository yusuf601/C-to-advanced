#include <iostream>
#include <string>

int main(){

    std::string kalimat_1("Do not repeat your self");
    std::string kalimat_2("Clean Architecture");

    std::cout << "1:" << kalimat_1 << std::endl;
    std::cout << "2:" << kalimat_2 << std::endl;
    std::cout << "_____________________________________________________________________ \n" << std::endl;
    //swap string
    std::cout << "Swap String " << std::endl;
    kalimat_1.swap(kalimat_2);
    std::cout << "1:" << kalimat_1 << std::endl;
    std::cout << "2:" << kalimat_2 << std::endl;

    // std::cout << "_____________________________________________________________________ \n" << std::endl;
    // //replace
    // int posisi = kalimat_1.find("Do");
    // kalimat_1.replace(posisi, 2, "dont");
    // std::cout << "1:" << kalimat_1 << std::endl; // Corrected output

    //inser string
    kalimat_1.insert(0,"Do");
    std::cout << "1:" << kalimat_1 << std::endl;
    std::cin.get();
    return 0;
}