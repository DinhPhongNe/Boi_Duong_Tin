#include <iostream>

int main(){
	int a,b,c,d;
	
	std::cout << "Nhap vao so a bat ki: ";
	std::cin >> a;
	std::cout << "Nhap vao so b bat ki: ";
	std::cin >> b;
	std::cout << "Nhap vao so c bat ki: ";
	std::cin >> c;
	std::cout << "Nhap vao so d bat ki: ";
	std::cin >> d;

	if(a > b && a > c && a > d){
		std::cout << "a la GTLN";
	} else if (b > a && b > c && b > d){
		std::cout << "b la GTLN";
	} else if (c > a && c > b && c > d){
		std::cout << "c la GTLN";
	} else if (d > a && d > b && d > c){
		std::cout << "d la GTLN";
	} else {
		std::cout << "loi";
	}
	
	
	return 0;
}


