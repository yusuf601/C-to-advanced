#include <iostream>

union data{
    int a;
    char b[4];
};


int main(){
    data data_union;
    data_union.a = 103343;
    std::cout << "Data union a :" << sizeof(data_union.a) << " " << " Value " << " : " << data_union.a << std::endl;
    std::cout << "Data union b :" << data_union.b << std::endl;



    std::cin.get();
    return 0;
}