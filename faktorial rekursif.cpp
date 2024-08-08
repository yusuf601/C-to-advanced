#include <iostream>
using namespace std;


int faktorial(int n);

int main(){
    int n,hasil;
    cout << "Masukkan nilai = ";
    cin >> n;
    hasil = faktorial(n);
    cout << "nilai faktorial = \n" << hasil << endl;

    cin.get();
    return 0;
}


int faktorial(int n){
    if(n <= 0){
        cout << n;
        return n;
    }else {
        cout << n << " * ";
        return n * faktorial(n - 1);
    }
    
}