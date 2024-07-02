#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a;

    cout << "Nhap thang bat ki trong nam: ";
    cin >> a;
    
    if(a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12){
    	cout << "Thang " << a << " co 31 ngay ";
	}else if(a == 4 || a == 6 || a == 9 || a == 11){
    	cout << "Thang " << a << " co 30 ngay ";
	} else{
		cout << "Thang " << a << " co 28 hoac 29 ngay tuy theo nam nhuan ";
	}

    return 0;
}
