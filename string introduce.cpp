#include <iostream>
#include <string>


int main(){
    std::string word("This word");
    std::cout << word << std::endl;

    std::string data;
    std::cout << "Masukkan data : ";
    std::getline(std::cin,data);
    std::cout << "Data yang anda masukkan : ";
    std::cout << data << std::endl;




    std::cin.get();
    return 0;
}