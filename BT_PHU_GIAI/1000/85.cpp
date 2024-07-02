#include <iostream>
using namespace std;

int main() {
    float a;

    cout << "Nhap thang trong nam: ";
    cin >> a;

    while (a < 1 || a > 12) {
        cout << "Cac thang trong nam tu 1 den 12. Vui long nhap lai: ";
        cin >> a;
    }

    if (a >= 1 && a <= 3) {
        cout << "Thang " << a << " la quy 1 trong nam";
    } else if (a >= 4 && a <= 6) {
        cout << "Thang " << a << " la quy 2 trong nam";
    } else if (a >= 7 && a <= 9) {
        cout << "Thang " << a << " la quy 3 trong nam";
    } else {
        cout << "Thang " << a << " la quy 4 trong nam";
    }

    return 0;
}
