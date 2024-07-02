#include <iostream>
#include <cmath> // Thu vi?n ch?a h�m pow
using namespace std;

int main() {
    double x;
    int n;

    // Nh?p gi� tr? x
    cout << "Nhap x: ";
    cin >> x;

    // Nh?p n (n l� s? nguy�n kh�ng �m)
    do {
        cout << "Nhap n (so nguyen khong am): ";
        cin >> n;
        if (n < 0) {
            cout << "Vui long nhap so nguyen khong am!" << endl;
        }
    } while (n < 0);

    // T�nh x^n s? d?ng h�m pow
    double result = pow(x, n);

    cout << x << "^" << n << " = " << result << endl;

    return 0;
}

