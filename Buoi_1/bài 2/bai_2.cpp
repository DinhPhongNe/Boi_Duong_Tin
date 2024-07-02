#include <iostream>

int main(){
    int banKinh;
    int dienTich, chuVi;
    float pi;
    pi = 3.14;

    std::cout << "Nhap vao ban kinh hinh tron: ";
    std::cin >> banKinh;

    chuVi = banKinh*banKinh * pi;
    dienTich = pi*(chuVi/2)*2;

    std::cout << "chu vi hinh tron la: " << chuVi << std::endl;
    std::cout << "Dien tich hinh tron la: " << dienTich << std::endl;

    return 0;
}