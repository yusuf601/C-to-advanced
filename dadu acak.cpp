#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

int main() {
    char lanjut;
    while(true){
        cout << "apakah anda ingin melempar dadu(Y/n) = ";
        cin >> lanjut;
        lanjut = toupper(lanjut);

        if(lanjut == 'Y') {
            cout << 1 + rand() % 6 << endl;

        }else if(lanjut == 'n'){
            break;
        }else{
            cout << "warning" << endl;
        }

        
    }

    cin.get();
    return 0;
}
