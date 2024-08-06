#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
  if (num <= 1) {
    return false;
  }
  for (int i = 2; i * i <= num; ++i) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int num;
  cout << "Masukkan bilangan: ";
  cin >> num;

  if (isPrime(num)) {
    cout << num << " adalah bilangan prima." << endl;
  } else {
    cout << num << " bukan bilangan prima." << endl;
  }

  return 0;
}
