#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Hàm quay lui d? tìm s? nang lu?ng t?i thi?u
void backtrack(int currentLength, int currentEnergy, int K, int& minEnergy) {
    // N?u chi?u dài hi?n t?i dã d?t d?n ho?c vu?t quá K
    if (currentLength >= K) {
        // C?p nh?t nang lu?ng t?i thi?u n?u c?n
        if (currentLength == K) {
            minEnergy = min(minEnergy, currentEnergy);
        }
        return;
    }

    // S? d?ng l?nh C1
    backtrack(currentLength + 1, currentEnergy + 2, K, minEnergy);

    // S? d?ng l?nh N2 n?u s? don v? chi?u dài hi?n t?i khác 0
    if (currentLength != 0) {
        backtrack(currentLength * 2, currentEnergy + 4, K, minEnergy);
    }
}

int main() {
    int K;
    cout << "Nhap don vi do dai K: ";
    cin >> K;

    // Bi?n luu tr? nang lu?ng t?i thi?u ban d?u là vô cùng l?n
    int minEnergy = INT_MAX;

    // G?i hàm quay lui
    backtrack(1, 0, K, minEnergy);

    // In ra k?t qu?
    cout << "So don vi nang luong su dung: " << minEnergy << endl;

    return 0;
}

