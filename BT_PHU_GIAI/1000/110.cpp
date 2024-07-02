#include <iostream>

using namespace std;

int main() {
	int tong_phuong_an = 0;
    int tongTien = 200000;
    int so1000, so2000, so5000;

    cout << "Cac phuong an de co tong 200.000 VND tu 3 loai giay bac:\n";

    for (so5000 = 0; so5000 <= tongTien / 5000; so5000++) {
        for (so2000 = 0; so2000 <= (tongTien - so5000 * 5000) / 2000; so2000++) {
            so1000 = (tongTien - so5000 * 5000 - so2000 * 2000) / 1000;
            tong_phuong_an += 1;
            if (so1000 >= 0) {
                cout << "5000 VND: " << so5000 << " to" << endl;
                cout << "2000 VND: " << so2000 << " to" << endl;
                cout << "1000 VND: " << so1000 << " to" << endl;
                cout << "--------------------" << endl;
            }
        }
    }
    
	cout << "Tong phuong an kha thi la: " << tong_phuong_an;
    return 0;
}
