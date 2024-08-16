#include <iostream>
#include <string>


int main(){

    std::string kata("Rumah");
    std::cout << kata << std::endl;

    //berdasarkan index
    std::cout << "Berdasarkan index ke-0  = " << kata[0] << std::endl;
    std::cout << "Berdasarkan index ke-1  = " << kata[1] << std::endl;
    std::cout << "Berdasarkan index ke-2  = " << kata[2] << std::endl;
    std::cout << "Berdasarkan index ke-3  = " << kata[3] << std::endl;
    std::cout << "Berdasarkan index ke-4  = " << kata[4] << std::endl;
    //merubah karakter pada index
    kata[2] = 's';
    kata[4] = 'k';

    std::cout << kata << std::endl;
    //menyambunkan kata atau concatenation
    std::string kata2(kata + " banget");
    std::cout << kata2 << std::endl;

    std::string kata3(" lagi");
    kata2.append(kata3);
    std::cout << kata2 << std::endl;    

    std::string kata4("lagi!!!!!!!!");
    kata2 += " " + kata4;
    std::cout << kata2 << std::endl;    


    std::cin.get();
    return 0;
}