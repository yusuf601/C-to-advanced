// #include <iostream>
// #include <string>

// int main(){
//     std::string kalimat;
//     std::cout << "Masukkan kalimat";
//     std::getline(std::cin,kalimat);
//     std::cout << "Kalimat : " << kalimat << std::endl;

//     bool pilihan;
//     int posisi = 0;
//     int jumlah = 0;

//     while(pilihan == true){
//         posisi = kalimat.find(" ",posisi + 1);
//         jumlah++;
//         if(posisi < 0 ){
//             pilihan = false;
//         } 
//     }
//     std::cout << "Jumlah kata " << jumlah << std::endl;


//     std::cin.get();
//     return 0;
// }

#include <iostream>
#include <string>

int main(){
    std::string kalimat;
    std::cout << "Masukkan kalimat: ";
    std::getline(std::cin,kalimat);

    // Hapus spasi di awal dan akhir kalimat
    kalimat.erase(0, kalimat.find_first_not_of(" "));
    kalimat.erase(kalimat.find_last_not_of(" ") + 1);

    int posisi = 0, jumlah = 0;
    while((posisi = kalimat.find(" ", posisi + 1)) != std::string::npos){
        jumlah++;
    }
    jumlah++; // Menambahkan kata terakhir

    std::cout << "Jumlah kata: " << jumlah << std::endl;
    return 0;
}

/*
Kondisi posisi != -1 akan membuat loop terus 
berjalan selama masih ada spasi yang ditemukan 
dalam kalimat. Ketika tidak ada lagi spasi, 
nilai posisi akan menjadi -1 dan loop akan berhenti.
*/