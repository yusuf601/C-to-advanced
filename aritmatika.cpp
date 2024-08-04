#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 2;
    int penjumlahan;
    int pengurangan;
    int perkalian;
    int sisa;
    float pembagian; //float karena hasil pembagian tidak selalu bulat
    penjumlahan = a + b;
    pengurangan = a - b;
    perkalian = a * b;
    pembagian = a / b;
    sisa = a % b;

    //operator tambah (+)
    cout << "hasil penjumlahan: " << a + b << endl;
    cout << a << "+" << b << "=" << penjumlahan << endl;
    //operator (-)
    cout << "hasil pengurangan: " <<a - b << endl;
    cout << a << "-" << b << "=" << pengurangan << endl;
    //operator pembagian(/)
    cout << "hasil pembagian: " << a / b << endl;
    cout << a << "/" << b << "=" << pembagian << endl;
    //operator perkalian (*)
    cout << "hasil perkalian: " << a * b << endl;
    cout << a << "x" << b << "=" << perkalian << endl;
    //operasi modulo
    cout << "sisa bagi :" << a % b << endl;
    cout << a << " mod " << b << "=" << sisa << endl;
    

    return 0;
}
