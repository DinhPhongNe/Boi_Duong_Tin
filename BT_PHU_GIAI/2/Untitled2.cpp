#include <iostream>
using namespace std;

int main(){
    float canh_a;
    float canh_b;
    float canh_c;

    cout << "Hay nhap canh a: ";
    cin >> canh_a;    
    cout << "Hay nhap canh b: ";
    cin >> canh_b;
    cout << "Hay nhap canh c: ";
    cin >> canh_c;
    
    if (canh_a + canh_b > canh_c && canh_b + canh_c > canh_a && canh_a + canh_c > canh_b) {
        cout << "Duoc";
    } else {
        cout << "Khong";
    }

    return 0;
}

