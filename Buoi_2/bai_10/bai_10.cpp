#include <iostream>
using namespace std;

void findCombinations(int total, int denom1, int denom2, int denom3, int denom4, int denom5) {
    bool found = false;
    int count = 0;

    for (int i = 0; i <= total / denom1; ++i) {
        for (int j = 0; j <= total / denom2; ++j) {
            for (int k = 0; k <= total / denom3; ++k) {
                for (int l = 0; l <= total / denom4; ++l) {
                    for (int m = 0; m <= total / denom5; ++m) {
                        if (i * denom1 + j * denom2 + k * denom3 + l * denom4 + m * denom5 == total) {
                            cout << i << " to " << denom1 << " VND, " 
                                 << j << " to " << denom2 << " VND, " 
                                 << k << " to " << denom3 << " VND, "
                                 << l << " to " << denom4 << " VND, "
                                 << m << " to " << denom5 << " VND" << endl;
                            found = true;
                            count++;
                        }
                    }
                }
            }
        }
    }

    if (!found) {
        cout << "Khong thoa man to hop nao" << endl;
    } else {
        cout << "Tong so to hop hop le: " << count << endl;
    }
}

int main() {
    int total;
    
    do {
    	cout << "Nhap to tien can doi: ";
    	cin >> total;
    	if ( total < 0){
    		cout << "Tien te khong duoc am, vui long nhap lai" << endl;
		}
	} while ( total < 0);
    
    int denom1 = 50000;
    int denom2 = 100000;
    int denom3 = 200000;
    int denom4 = 500000;
    int denom5 = 1000000;

    cout << "Cac to hop hop le la: " << endl;
    findCombinations(total, denom1, denom2, denom3, denom4, denom5);

    return 0;
}

