#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x0, y0, r;
    double xA, yA;

    // Nhap toa do tam duong tron va ban kinh
    cout << "Nhap toa do tam duong tron (x0, y0): ";
    cin >> x0 >> y0;
    cout << "Nhap ban kinh duong tron r: ";
    cin >> r;

    // Nhap toa do diem a
    cout << "Nhap toa do diem A (xA, yA): ";
    cin >> xA >> yA;

    // Tinh khoang cach tu diem a den tam duong tron
    double distance = sqrt((xA - x0) * (xA - x0) + (yA - y0) * (yA - y0));

    // So sanh khoang cach voi ban kinh
    if (distance == r) {
        cout << "Diem A nam tren duong tron." << endl;
    } else if (distance < r) {
        cout << "Diem A nam trong duong tron." << endl;
    } else {
        cout << "Diem A nam ngoai duong tron." << endl;
    }

    return 0;
}

