#include <iostream>

int main(){
	int a,b,c,d;
	
	std::cout << "Nhap vao bon so a bat ki: ";
	std::cin >> a;
	std::cout << "Nhap vao bon so b bat ki: ";
	std::cin >> b;
	std::cout << "Nhap vao bon so c bat ki: ";
	std::cin >> c;
	std::cout << "Nhap vao bon so d bat ki: ";
	std::cin >> d;

	if(a < b && a < c && a < d){
		std::cout << "a la GTNN";
	} else if (b < a && b < c && b < d){
		std::cout << "b la GTNN";
	} else if (c < a && c < b && c < d){
		std::cout << "c la GTNN";
	} else if (d < a && d < b && d < c){
		std::cout << "d la GTNN";
	} else {
		std::cout << "loi";
	}
	
	
	return 0;
}



