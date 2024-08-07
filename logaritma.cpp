#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;

double logaritma(double x){
    double y;
    y = log10(x);
    return y;
}

double natural(double a){
    double in;
    in = log(a);
    return in;
}

double dua(double p){
    double basis_2;
    basis_2 = log2(p);
    return basis_2;

}



int main(){
    double input,hasil1,hasil2,hasil3;
    char pilihan;

    cout << "Logaritma berbasis 10 (1),logaritma natural(2),Logaritma basis 2 (3) (ketik angka) = ";
    cin >> pilihan;
    pilihan = toupper(pilihan);
    if(pilihan = '1') {
        cout << "masukkan nilai numerus = ";
        cin >> input;

        hasil1 = logaritma(input);
        cout << hasil1 << endl;
    }else if(pilihan = '2'){
        cout << "masukkan nilai numerus = ";
        cin >> input;
        hasil2 = natural(input);
        cout << hasil2 << endl;

        cout << natural << endl;
    }else if(pilihan = '3'){
        cout << "masukkan nilai numerus = ";
        cin >> input;
        hasil3 = dua(input);
        cout << hasil3 << endl;
    }else{
        cout << "pilihan tidak ditemukan " << endl;
    }

}



