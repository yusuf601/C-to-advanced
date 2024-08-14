#include <iostream>
using namespace std;

int main() {
  // Kami menggunakan "1" untuk menunjukkan adanya kapal.
  bool kapal[4][4] = {
    { 0, 1, 1, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 1, 0 },
    { 0, 0, 1, 0 }
  };

  // Lacak berapa banyak tembakan mengenai kapal dan berapa banyak giliran yang sudah dimainkan
  int tembakan_mengenai = 0;
  int jumlah_giliran = 0;

  // Izinkan pemain terus bermain sampai semua kapal tenggelam
  while (tembakan_mengenai < 4) {
    int baris, kolom;

    cout << "Memilih koordinat\n";

    // Minta pemain memilih nomor baris
    cout << "Pilih nomor baris antara 0 dan 3: ";
    cin >> baris;

    // Minta pemain memilih nomor kolom
    cout << "Pilih nomor kolom antara 0 dan 3: ";
    cin >> kolom;

    // Periksa apakah ada kapal di koordinat tersebut
    if (kapal[baris][kolom]) {
      // Jika pemain mengenai kapal, hapus kapal dengan mengubah nilainya menjadi nol.
      kapal[baris][kolom] = 0;

      // Tingkatkan penghitung tembakan mengenai kapal
      tembakan_mengenai++;

      // Beritahu pemain bahwa mereka mengenai kapal dan berapa banyak kapal yang tersisa
      cout << "Terkena! Tersisa " << (4-tembakan_mengenai) << " kapal.\n\n";
    } else {
      // Beritahu pemain bahwa mereka meleset
      cout << "Meleset\n\n";
    }

    // Hitung berapa banyak giliran yang sudah dimainkan
    jumlah_giliran++;
  }

  cout << "Menang!\n";
  cout << "Anda menang dalam " << jumlah_giliran << " giliran";

  return 0;
}
