#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, h;
    cout << "Nhap vao canh a: ";
	cin >> a;
    cout << "Nhap vao canh b: ";
	cin >> b;
    cout << "Nhap vao canh c: ";
	cin >> c;
	cout << "Nhap vao chieu cao h: ";
	cin >> h;

    // Kiem tra 3 canh
    if (a + b > c && a + c > b && b + c > a) {
        float p = a + b + c; // Chu vi
        float s = (a*5)/2; //dien tich

        cout << "Chu vi cua tam giac la: " << p << endl;
        cout << "Dien tich cua tam giac la: " << s << endl;
    } else {
        cout << "Khong la ba canh cua mot tam giac." << endl;
    }

    return 0;
}




