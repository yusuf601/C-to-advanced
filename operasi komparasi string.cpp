#include <iostream>
#include <string>

int main() {
    std::string input;
    std::string rahasia = "Real Madrid";

    while (true) {
        std::cout << "Masukkan kode sandi = ";
        std::cin >> input;

        if (input == rahasia) {
            std::cout << "Anda berhak masuk!!!" << std::endl;
            break; // Keluar dari loop jika sandi benar
        } else {
            std::cout << "Kode sandi salah. Silahkan coba lagi." << std::endl;
        }
    }

    return 0;
}