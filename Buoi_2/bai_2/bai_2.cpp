#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y;

    // Nhap gia tri cua x va y
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;

    // Tinh x^y
    int result = pow(x, y);

    cout << x << "^" << y << " = " << result << endl;

    return 0;
}

