#include <iostream>
#include <cmath>
using namespace std;
/*ceil(x): Membulatkan bilangan x ke atas menjadi bilangan bulat terdekat. Contoh: ceil(2.3) akan menghasilkan 3.
cos(x): Menghitung nilai kosinus dari sudut x yang dinyatakan dalam radian.
exp(x): Menghitung nilai e pangkat x (e^x), di mana e adalah bilangan Euler (sekitar 2.71828).
fabs(x): Menghitung nilai absolut (nilai mutlak) dari bilangan x. Nilai absolut suatu bilangan selalu positif.
floor(x): Membulatkan bilangan x ke bawah menjadi bilangan bulat terdekat. Contoh: floor(2.7) akan menghasilkan 2.
fmod(x): Menghitung sisa pembagian dari dua bilangan floating-point. Mirip seperti operator modulus (%) untuk bilangan bulat, tetapi untuk bilangan pecahan.
log(x): Menghitung logaritma natural (basis e) dari bilangan x.
log10(x): Menghitung logaritma dengan basis 10 dari bilangan x.
pow(x, y): Menghitung nilai x pangkat y (x^y).
sin(x): Menghitung nilai sinus dari sudut x yang dinyatakan dalam radian.
sqrt(x): Menghitung akar kuadrat dari bilangan x.
tan(x): Menghitung nilai tangen dari sudut x yang dinyatakan dalam radian.
*/

int main() {
    int x;
    cout << "masukkan nilai yang anda inginkan = ";
    cin >> x;

    cout << "nilai akar " << x << " = " << sqrt(x) << endl;

    
    cin.get();
    return 0;
}
