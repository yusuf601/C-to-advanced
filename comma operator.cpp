#include <iostream>
#include <string>


int main(){
//comma operator sederhana
    int a,b,c;
    a = ( b=1, c=2);
    c = (a + b);
    std::cout << "Nilai c: " << c << std::endl;
    std::cout << "Nilai a: " << a << std::endl;
    std::cout << "Nilai b: " << b << std::endl;
    std::cin.get();
    return 0;
}