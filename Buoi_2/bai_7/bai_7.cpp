#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    int N;

    // Nh?p gi� tr? c?a x v� N
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap N: ";
    cin >> N;

    double sum = 0;
    double factorial = 1;

    // T�nh t?ng S
    for (int i = 1; i <= N; ++i) {
        factorial *= i;  // T�nh giai th?a c?a i
        sum += pow(x, i) / factorial;
    }

    // In k?t qu?
    cout << "Tong S = " << sum << endl;

    return 0;
}

