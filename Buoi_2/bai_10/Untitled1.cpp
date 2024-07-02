#include <iostream>
using namespace std;

int main() {
    int tien_doi;
    cout << "Nhap so tien can doi: "; 
    cin >> tien_doi;

    int menh_gia[] = {500000, 200000, 100000, 50000};
    int so_to[] = {0, 0, 0, 0};

    for (int i = 0; i < 4; ++i) {
        so_to[i] = tien_doi / menh_gia[i];
        tien_doi %= menh_gia[i];
    }

    cout << "So to 500k: " << so_to[0] << endl;
    cout << "So to 200k: " << so_to[1] << endl;
    cout << "So to 100k: " << so_to[2] << endl;
    cout << "So to 50k: " << so_to[3] << endl;
    cout << "-> So tien thua: " << tien_doi << "d" << endl;

    return 0;
}
