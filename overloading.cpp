#include <iostream>
using namespace std;

//basic function
int luas_kotak(int panjang, int lebar){
    return panjang * lebar;
}

//overloading function
int luas_kotak(int panjang){
    return panjang * panjang;
}

double luas_kotak(double sisi){
    return sisi * sisi;
}
int main(){

    cout << "Luas_kotak 2x3 = " << luas_kotak(2,3) << endl;
    cout << "luas kotak 2*2 = " << luas_kotak(2) << endl;
    cout << "Luas kotal 2,5x2,5 = " << luas_kotak(2,5);


    cin.get();
    return 0;
}