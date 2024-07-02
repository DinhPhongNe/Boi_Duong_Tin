#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "Nhap mot so nguyen khong am: ";
        cin >> n;
        if (n < 0) {
            cout << "Vui long nhap so nguyen khong am!" << endl;
        }
    } while (n < 0);

    if (n < 2) {
        cout << n << " khong phai la so nguyen to." << endl;
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true) {
        cout << n << " la so nguyen to." << endl;
    } else {
        cout << n << " khong phai la so nguyen to." << endl;
    }
    
    return 0;
}

