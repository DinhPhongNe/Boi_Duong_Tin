#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    int N;
    double sum = 0;

    // nhap gia tri x va n
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap N: ";
    cin >> N;

    // tinh tong tu 1 den n
    for (int i = 1; i <= N; ++i) {
        sum += pow(x, i);
    }

    cout << "Tong x^i tu 1 den " << N << " la: " << sum << endl;

    return 0;
}

