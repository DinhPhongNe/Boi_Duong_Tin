#include <iostream>
using namespace std;

int main() {
    int N;
    int sum = 0;

    cout << "Nhap N: ";
    cin >> N;

    for (int i = 0; i <= N; ++i) {
        sum += i;
    }

    cout << "Tong S tu 0 den " << N << " la: " << sum << endl;

    return 0;
}
