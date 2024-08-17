/*
int = 4 byte memory
char = 1 byte memory
float 4 byte memory
*/

#include <iostream>
#include <string>
int main(){

    int age = 20;
    int *pAge = &age;
    double ipk = 4.1;
    double *pIpk = &ipk;
    std::string kata = "Yusuf";
    std::string *pKata = &kata;


    std::cout << "Nilai = " << pAge << std::endl; 
    std::cout << "Nilai = " << *pAge << std::endl;  
    std::cout << "Nilai = " << pIpk << std::endl;  
    std::cout << "Nilai = " << *pIpk << std::endl;  
    std::cout << "Nilai = " << pKata << std::endl;  
    std::cout << "Nilai = " << *pKata << std::endl;   
 /*output
Nilai = 0x7fff76b17820 // karena yg dipanggil adalah variabel pAge yg memiliki alamat/adress age
Nilai = 20 // karena memangill alamat pAge yg dimana berisi nilai interger 5 -> deferencing
Nilai = 0x7fff76b17818 // karena yg dipanggil adalah variabel pIpk yg memiliki alamat/adress veriabel ipk
Nilai = 4.1 // karena memangill alamat pIpk yg dimana berisi nilai double 4.1 -> deferencing
Nilai = 0x7fff76b177f0 // karena yg dipanggil adalah variabel pKata yg memiliki alamat/adress variabel kaya
Nilai = Yusuf // karena memangill alamat pAge yg dimana berisi nilai string "yusuf" -> deferencing
 */

    std::cin.get();
    return 0;
}