#include <iostream>
using namespace std;

int kuadratIterasi(int a, int b){
    int hasil = a;  
    for(int i = 1; i < b; i++){ 
        hasil = hasil * a; 
    }
    return hasil;
}
int kuadratRekursif (int a, int b){
    if(b <= 1){
        return a;
    }else {
        return a * kuadratRekursif(a,(b - 1));
    }
    
}



int main(){
    int a,b;
    cout << "Masukkan angka = ";
    cin >> a;
    cout  << "Masukkan pangkat = ";
    cin >>b;
    cout << "hasil iterasu = " << kuadratIterasi(a,b) << endl;
    cout << "hasil rekursif = " << kuadratRekursif(a,b);


    cin.get();
    return 0;
}

