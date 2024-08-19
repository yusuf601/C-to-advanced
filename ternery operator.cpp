#include <iostream>
#include <string>

//ternery operator = ?
//(kondisi) ? hasil1 : hasil2



int main(){
    int a,b;
    std::string hasil1,hasil2,output;

    std::cout << "Masukkan nilai a: ";
    std::cin >> a;
    std::cout << "Masukkan nilai b: ";
    std::cin >> b;

    hasil1 = "Yusuf";
    hasil2 = "Maria";

    output = (a < b) ? hasil1 : hasil2;
    // std::cout << output << std::endl;  
    std::cout << (a < b ? hasil1 : hasil2) << std:: endl; // lebih efektif
    std::cin.get();
    return 0;
}
/*output percobaan 1
Masukkan nilai a: 4
Masukkan nilai b: 6  // true
Yusuf  //hasil1
*/
/*percobaan 2
Masukkan nilai a: 6
Masukkan nilai b: 3 //false
Maria  //hasil2
*/
//kesimpulan jika false akan mengeluarkan hasil 2 jika true akan mengeluarkan hasil1