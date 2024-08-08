#include <iostream>
using namespace std;

int main(){
    int a = 5;
    //pointer
    int *aPtr = nullptr;
    aPtr = &a;

    //int a memiliki addres dan nilai 1 alamat

    cout << "nilai : " << a;
    cout << "Alamat : " << &a;
}