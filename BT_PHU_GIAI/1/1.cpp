#include <iostream>
#include <math.h>
using namespace std;


int canh_b, canh_c;
int main(){

    freopen("CTDL.inp","r",stdin);
    freopen("CTDL.out","w",stdout);
	cin >> canh_b, canh_c;
	int cin_pow = 2;
	
	cout << "Hay nhap canh b: ";
	cin >> canh_b;
	cout << "Hay nhap canh c: ";
	cin >> canh_c;
	
	float result = pow(canh_b, cin_pow) + pow(canh_c, cin_pow);
	float pytago_result = sqrt(result);
	float lam_tron = (round(pytago_result));


	cout << "Do dai canh huyen la: " << lam_tron;
	return 0;
}

