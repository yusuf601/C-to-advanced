#include <iostream>

using namespace std;

int kuadrat(int x) {
    int y;
    y = x * x;
    return y;

}


int main(int argc,char const *argv) {
    int input,hasil;
    cout << "masukan nilai kuadrat";
    cin >> input;

    hasil = kuadrat(input);
    cout << hasil << endl;


    cin.get();
    return 0;
}