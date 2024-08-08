//gagal total
#include <iostream>

using namespace std;

int fibonacciIteratif(int n) {
    if (n <= 1) {
        return n;
    }

    int fib1 = 0, fib2 = 1, fibNext;
    for (int i = 2; i <= n; i++) {
        fibNext = fib1 + fib2;
        fib1 = fib2;
        fib2 = fibNext;
    }
    return fibNext;
}

int main() {
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;

    cout << "Nilai Fibonacci ke-" << n << " adalah: " << fibonacciIteratif(n) << endl;

    return 0;
}