#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

    // Nh?p giá tr? c?a a, b và c
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;
    cout << "Nhap he so c: ";
    cin >> c;

    if (a == 0) {
        // Phuong trình b?c nh?t bx + c = 0
        if (b == 0) {
            if (c == 0) {
                cout << "Phuong trinh vo so nghiem." << endl;
            } else {
                cout << "Phuong trinh vo nghiem." << endl;
            }
        } else {
            double x = -c / b;
            cout << "Phuong trinh co mot nghiem x = " << x << endl;
        }
    } else {
        // Phuong trình b?c hai ax^2 + bx + c = 0
        double delta = b * b - 4 * a * c;

        if (delta > 0) {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Phuong trinh co hai nghiem phan biet:" << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        } else if (delta == 0) {
            double x = -b / (2 * a);
            cout << "Phuong trinh co nghiem kep x = " << x << endl;
        } else {
            cout << "Phuong trinh vo nghiem." << endl;
        }
    }

    return 0;
}

