#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Masukkan nilai n yang anda inginkan = ";
    cin >> n;

    cout << "Deret kuadrat: ";

    for (int i = 1; i <= n; ++i) {
        int kuadrat = i * i;
        cout << kuadrat << " ";
    }

    return 0;
}
