#include <iostream>
using namespace std;

int main() {
    double a, b;

    // Nh?p gi� tr? c?a a v� b
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;

    if (a == 0) {
        if (b > 0) {
            cout << "Bat phuong trinh dung voi moi x." << endl;
        } else {
            cout << "Bat phuong trinh vo nghiem." << endl;
        }
    } else {
        // Gi?i b?t phuong tr�nh ax + b > 0
        double x = -b / a;
        if (a > 0) {
            cout << "Bat phuong trinh dung khi x > " << x << endl;
        } else {
            cout << "Bat phuong trinh dung khi x < " << x << endl;
        }
    }

    return 0;
}

