#include <iostream>
using namespace std;

void fungsi(int *b){
        cout << "Nilai b = " << b << endl;
    cout << "Adress b = " << *b << endl << endl; //deferencing
}

void kuadrat(int *valPtr){
    *valPtr = (*valPtr) * (*valPtr);
}




int main(){
    int a = 5;

    cout << "Nilai a = " << a << endl;
    cout << "Adress a = " << &a << endl << endl;
    // fungsi(&a);  //fungsi untuk pointer
    kuadrat(&a);
    cout << "Nilai a = " << a << endl;


    cin.get();
    return 0;

}