#include <iostream>
using namespace std;

float a, b;
char c;

int main() {
    cout << "Nhap so a: ";
    cin >> a;
    cout << "Nhap so b: ";
    cin >> b;

    cout << "Hay nhap dau cho phuong trinh (cong hay tru): ";
    cin >> c;

    if (c == 'c' || c == 'C') {
        cout << "Ta co phuong trinh ax + b = 0 se la " << a << "x + " << b << " = 0" << endl;
        float result = -b / a;
        cout << "Se co ket qua la: " << result;
    } else if (c == 't' || c == 'T') {
        cout << "Ta co phuong trinh ax - b = 0 se la " << a << "x - " << b << " = 0" << endl;
        float result = b / a;
        cout << "Se co ket qua la: " << result;
    } else {
        cout << "Dau nhap khong hop le!" << endl;
    }

    return 0;
}
