#include <iostream>
#include <bitset>
#include <string>

void printBiner(unsigned short val, std::string nama){
    std::cout << nama << " = " << std::bitset<8>(val) << std::endl;

}

int main(){
    unsigned short a = 6;
    unsigned short b = 3;
    unsigned short c;
    std::cout << "\n bitwise NOT   -------(~)------" << std::endl;
    c = ~a;          
    printBiner(a, "a");
    printBiner(c, "c");


    std::cout << "\n bitwise SHL   -------(^)------" << std::endl;
    c = a << 1;          
    printBiner(a, "a"); //di geser satu bit ke kiri // atau secara bit paling kiri akan menjadi bit paling kanan
    printBiner(c, "c");


    std::cout << "\n bitwise SHR   -------(^)------" << std::endl;
    c = a >> 1;          
    printBiner(a, "a");
    printBiner(c, "c");   //di geser satu bit ke kanan atau secara bit paling kanan akan menjadi bit paling kiri



    std::cout << "\n bitwise XOR   -------(^)------" << std::endl;
    c = a ^ b;          
    printBiner(a, "a");
    printBiner(b, "b");
    printBiner(c, "c");


    std::cout << "\n bitwise OR   -------(|)------" << std::endl;
    c = a | b;          
    printBiner(a, "a");
    printBiner(b, "b");
    printBiner(c, "c");



    std::cout << "\nbitwise and   -------(&)------" << std::endl;
    c = a & b;           //ampersand(&) biasa nya digunakan untuk menginialisasi adrees/alamat dari suatu data
    printBiner(a, "a");
    printBiner(b, "b");
    printBiner(c, "c");
    std::cin.get();
    return 0;
}

    /*
    Masing-masing bit dari kedua bilangan yang dioperasikan akan dibandingkan. Jika kedua bit pada posisi yang sama bernilai 1, 
    maka hasil pada posisi yang sama di bilangan hasil juga akan 1. 
    Jika salah satu atau keduanya bernilai 0, maka hasil pada posisi yang sama juga akan 0.
    */
   /*
    Berbeda dengan logika AND, pada logika OR jika salah satu input saja bernilai 1 (true), maka outputnya akan bernilai 1 (true).
   */
// bitwise operator
// &	AND	Bitwise AND
// |	OR	Bitwise inclusive OR
// ^	XOR	Bitwise exclusive OR
// ~	NOT	
// <<	SHL	Shift bits left
// >>	SHR	Shift bits right