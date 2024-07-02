#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c;

    cout << "Nhap do dai canh a: ";
    cin >> a;
    cout << "Nhap do dai canh b: ";
    cin >> b;
    cout << "Nhap do dai canh c: ";
    cin >> c;

    // Ki?m tra di?u ki?n tam giác
    if (a + b > c && a + c > b && b + c > a) {
        // Ki?m tra lo?i tam giác
        if (a == b && b == c) {
            cout << "Day la tam giac deu." << endl;
        } else if (a == b || a == c || b == c) {
            cout << "Day la tam giac can." << endl;
        } else if (pow(a, 2) + pow(b, 2) == pow(c, 2) ||
                   pow(a, 2) + pow(c, 2) == pow(b, 2) ||
                   pow(b, 2) + pow(c, 2) == pow(a, 2)) {
            cout << "Day la tam giac vuong." << endl;
        } else {
            cout << "Day la tam giac thuong." << endl;
        }
    } else {
        cout << "Ba canh nhap vao khong tao thanh tam giac." << endl;
    }

    return 0;
}
