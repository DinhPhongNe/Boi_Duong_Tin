#include <iostream>
using namespace std;

//tao ham isPrime de kiem tra do co phai so nguyen to hay khong
bool isPrime(int number) {
    if (number < 2) {
        return false;
    }
    for (int i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
	
	//kiem tra n phai so am hay khong
    do {
        cout << "Nhap so nguyen khong am n: ";
        cin >> n;
        if (n < 0) {
            cout << "vui long nhap so nguyen khong am! " << endl;
        }
    } while (n < 0);
	
	//kiem tra n phai so am hay khong
    if (isPrime(n)) {
        cout << n << " la so nguyen to" << endl;
        cout << "Cac so nguyen to nho hon " << n << " la: ";
        for (int i = 2; i < n; ++i) {
            if (isPrime(i)) {
                cout << i << " ";
            }
        }
        cout << endl;
    } else {
        cout << n << " khong phai la so nguyen to" << endl;
    }

    return 0;
}

