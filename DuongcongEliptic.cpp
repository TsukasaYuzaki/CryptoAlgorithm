#include <iostream>
#include "D:\\ThuattoanATTT\\CryptoAlgorithm\\ebs.h"
#include "D:\\ThuattoanATTT\\CryptoAlgorithm\\euclide.h"
using namespace std;

typedef struct lamda{
	int tu;
	int mau;
}lamd;

int main(){
	//cout << euclide(3, 11) << " ";
	lamd ld;
	int lam, mang1[2], mang2[2], a, x3, y3, p, i;
	cout << "Nhap vao p: "; cin >> p;
	for(i = 0; i < 2; i++){
		cout << "\nNhap vao mang1[ " << i << "] = "; cin >> mang1[i];
	}
	for(i = 0; i < 2; i++){
		cout << "\nNhap vao mang2[ " << i << "] = "; cin >> mang2[i];
	}
	if(mang1[0] == mang2[0] && mang1[1] != mang2[1]){
		cout << "HERERERERERE";
	}
	else if(mang1[0] == mang2[0] && mang1[1] == mang2[1]){
		cout << "\na = "; cin >> a;
		cout << "\n";
		ld.tu = (3 * mang1[0]*mang1[0] + a) ;
		ld.mau = (2 * mang1[1]) % p;
		while(ld.tu > p) ld.tu = ld.tu - p;
		while(ld.tu < 0) ld.tu = ld.tu + p;
		while(ld.mau > p) ld.mau = ld.mau - p;
		while(ld.mau < 0) ld.mau = ld.mau + p;
		//cout << euclide(ld.mau, p) << " ";
		lam = (ld.tu % p * euclide(ld.mau,p)) % p;
		//cout << lam << " ";
		x3 = lam*lam - mang1[0] - mang2[0];
		while(x3 > p) x3 = x3 - p;
		while(x3 < 0) x3 = x3 + p;
		cout << "x3 = " << x3;
		y3 = lam*(mang1[0] - x3) - mang1[1];
		while(y3 > p) y3 = y3 - p;
		while(y3 < 0) y3 = y3 + p;
		cout << "\ny3 = " << y3;
	}
	else{
		ld.tu = mang2[1] - mang1[1];
		ld.mau = mang2[0] - mang1[0];
		while(ld.tu > p) ld.tu = ld.tu - p;
		while(ld.tu < 0) ld.tu = ld.tu + p;
		while(ld.mau > p) ld.mau = ld.mau - p;
		while(ld.mau < 0) ld.mau = ld.mau + p;
		lam = (ld.tu % p * euclide(ld.mau,p)) % p;
		//cout << lam << " ";
		x3 = lam*lam - mang1[0] - mang2[0];
		while(x3 > p) x3 = x3 - p;
		while(x3 < 0) x3 = x3 + p;
		cout << "x3 = " << x3;
		y3 = lam*(mang1[0] - x3) - mang1[1];
		while(y3 > p) y3 = y3 - p;
		while(y3 < 0) y3 = y3 + p;
		cout << "\ny3 = " << y3;
	}
	return 0;
}
