#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, m, n;

    // Nhap cac he so cho phuong trinh
    cout << "Nhap he so cho phuong trinh ax + by = m" << endl;
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;
    cout << "Nhap he so m: ";
    cin >> m;
    
    cout << "_______________"<< endl;
    
    cout << "Nhap he so cho phuong trinh cx + dy = n" << endl;
    cout << "Nhap he so c: ";
    cin >> a;
    cout << "Nhap he so d: ";
    cin >> b;
    cout << "Nhap he so n: ";
    cin >> m;


    // Tinh dinh thuc cho he phuong trinh
    double D = a * d - b * c;
    double Dx = m * d - b * n;
    double Dy = a * n - m * c;

    // Kiem tra gia tri cua dinh thuc
    if (D != 0) {
        // He phuong trinh co nghiem duy nhat
        double x = Dx / D;
        double y = Dy / D;
        cout << "He phuong trinh co nghiem duy nhat:" << endl;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    } else {
        if (Dx == 0 && Dy == 0) {
            // He phuong trinh co vo so nghiem
            cout << "He phuong trinh co vo so nghiem." << endl;
        } else {
            // He phuong trinh vo nghiem
            cout << "He phuong trinh vo nghiem." << endl;
        }
    }

    return 0;
}


