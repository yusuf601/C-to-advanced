
    #include <iostream>
using namespace std;

int main() {
    int a;
    bool lanjut = true; // Variabel untuk mengontrol loop

    cout << "Masukkan angka yang anda ingin cek = ";
    cin >> a;

    while (lanjut) {
        if (a % 2 == 0) {
            cout << "ini adalah bilangan genap" << endl;
        } else {
            cout << "ini adalah bilangan ganjil" << endl;
        }

        cout << "Apakah Anda ingin melanjutkan? (y/n): ";
        char pilihan;
        cin >> pilihan;

        // Ubah nilai `lanjut` berdasarkan pilihan pengguna
        if (pilihan == 'n' || pilihan == 'N') {
            lanjut = false;
        }

    }
    // int a;
    // cout << "Masukkan angka yang anda ingin cek = ";  
    // cin >> a;
    // while (a) {
    //     if (a % 2 == 0 ) {
    //         cout << "ini adalah bilangan genap" << endl;
    //     } else; {
    //         cout << "ini adalah bilangan ganjil" << endl;
    //     }

    //     break;
    // }

    cin.get();
    return 0;
}

//code pertama lebih clean dengan menjadikan syarat while menjadi false
//sementara code kedua lebih susah di baca karena ada break;
//gunakan CTRL + / 


