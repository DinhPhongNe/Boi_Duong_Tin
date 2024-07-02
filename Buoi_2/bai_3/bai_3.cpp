#include <iostream>
using namespace std;

int main() {
    int N;
    unsigned long long factorial = 1;

    // Nhap gia tri N
    cout << "Nhap N: ";
    cin >> N;

    // Tinh N!
    for (int i = 1; i <= N; ++i) {
        factorial *= i;
    }

    cout << N << "! = " << factorial << endl;

    return 0;
}

