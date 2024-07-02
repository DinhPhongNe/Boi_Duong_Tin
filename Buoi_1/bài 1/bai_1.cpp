#include <iostream>

int main(){
    // Khai bao cac bien cho bai
    int chieu_dai, chieu_rong;
	int chu_vi, dien_tich;
	
    // Nhap vao mot so nguyen
    std::cout << "Nhap vao chieu dai canh: ";
    std::cin >> chieu_dai;
    std::cout << "Nhap vao chieu rong canh:";
    std:: cin >> chieu_rong;

	chu_vi = (chieu_rong + chieu_dai)*2;
	dien_tich = chieu_dai*chieu_rong;

	std::cout << " Chu vi hinh chu nhat la: " << chu_vi << std::endl;
	std::cout << " Dien tich hinh chu nhat la: " << dien_tich << std::endl;	

    return 0;
}
