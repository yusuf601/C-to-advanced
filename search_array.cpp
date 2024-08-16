#include <iostream>
#include <array>
#include <algorithm>


const size_t arraySize = 10;

void printArray(std::array <int, arraySize> &angka){
	std::cout << "Array: ";
	for(int &a : angka){
		std::cout << a << " ";
	}
	std::cout << std::endl;
}


int main(){
	std::array <int, arraySize> angka = {9,4,6,7,8,1,3,2,5,0};
    // int angkaCari = 6;
    bool dapat;
    int pilihan;

    std::cout << "Masukan angka  = ";
    std::cin >> pilihan;


    std::sort(angka.begin(), angka.end());
    dapat = std::binary_search(angka.begin(), angka.end(), pilihan);

    if(dapat){
        std::cout << "True " << std::endl;
    }else{
        std::cout << "Error 404 Not Found " << std::endl;
    }

	std::cin.get();
	return 0;
}