#include <iostream>
#include <cctype>

using namespace std;

//fungsi prototipe
//default argumen /nilai standar  berikan nilai pada iniliasisasi variabel 
double luas_kubus(double p, double l, double t);
int main(){
    cout << "Luas kubus = " << luas_kubus(2,4,5);
    cout << "luas kubus = " << luas_kubus(2,4);



    cin.get();
    return 0;
}

double luas_kubus(double p, double l, double t = 1){
    return p * l * t;
}