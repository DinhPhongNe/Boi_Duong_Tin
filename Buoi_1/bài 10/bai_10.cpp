#include <iostream>
using namespace std;

int main() {
    int x;
    int gio, phut, giay;

    cout << "Hay nhap vao x giay: ";
    cin >> x;

    gio = x / 3600;
    phut = (x % 3600) / 60;
    giay = x % 60;

    cout << x << " giay tuong duong voi" << endl;
    cout << gio << " Gio" << endl;
    cout << phut << " Phut" << endl;
    cout << giay << " Giay" << endl;

    return 0;
}

