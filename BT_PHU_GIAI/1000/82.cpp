#include <iostream>
using namespace std;

float a,b,c;
int main(){
	cout << "nhap so a: ";
	cin >> a;
	cout << "Nhap so b: ";
	cin >> b;
	cout << "Nhap so c: ";
	cin >> c;
	
	if(a > b and a > c){
		cout << "a lon nhat";
	} else if( b > a and b > c){
		cout << "b lon nhat";
	} else if(c > a and c > b){
		cout << "c lon nhat";
	}
	
	
	return 0;
}
