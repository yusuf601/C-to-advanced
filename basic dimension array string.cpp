#include <iostream>
using namespace std;
void matriks(string huruf){
  string letters[2][2][2] = {
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};

for (int a = 0; a < 2; a++) {
  for (int b = 0; b < 2; b++) {
    for (int c = 0; c < 2; c++) {
      cout << letters[a][b][c] << "\n";
    }
  }
}


}



int main() {
  string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
      cout << letters[i][j] << "\n";
    }
  }
  return 0;
}


//ouput
/*
A 0,0
B 0.1
C  0.2
D 0 ,3
E 1,0
F 1,1
G 1,2
H 1,3
*/
/*cara kerja iterasi pertama i akan memulai dari 0 dan setelah itu iterasi j akan memulai iterasi sampai nilai < 4
lalu iterasi i akan akan memulai dari 1 dan akan iterasi j akan berhenti setelah j < 4
*/
