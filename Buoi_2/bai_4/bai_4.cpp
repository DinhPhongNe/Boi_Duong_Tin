#include <iostream>
#include <cmath> // Thu vi?n ch?a hàm pow
using namespace std;

int main() {
    double x;
    int n;

    // Nh?p giá tr? x
    cout << "Nhap x: ";
    cin >> x;

    // Nh?p n (n là s? nguyên không âm)
    do {
        cout << "Nhap n (so nguyen khong am): ";
        cin >> n;
        if (n < 0) {
            cout << "Vui long nhap so nguyen khong am!" << endl;
        }
    } while (n < 0);

    // Tính x^n s? d?ng hàm pow
    double result = pow(x, n);

    cout << x << "^" << n << " = " << result << endl;

    return 0;
}

