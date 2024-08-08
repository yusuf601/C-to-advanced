#include <iostream>

using namespace std;

int kuadrat(int x) {
    int y;
    y = x * x;
    return y;

}

void tampilkan(int input) {
    cout << input << endl;
}


int main(int argc,char const *argv) {
    int input,hasil;
    cout << "masukan nilai kuadrat = ";
    cin >> input;

    hasil = kuadrat(input);
    tampilkan(hasil);


    cin.get();
    return 0;
}