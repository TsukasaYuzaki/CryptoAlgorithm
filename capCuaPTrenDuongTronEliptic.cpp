#include <iostream>
#include "D:\\ThuattoanATTT\\CryptoAlgorithm\\ebs.h"
#include "D:\\ThuattoanATTT\\CryptoAlgorithm\\euclide.h"
using namespace std;

typedef struct lamda{
	int tu;
	int mau;
}lamd;

lamd ld;

int main(){
	cout << "Duong cong co dang y^2 = x^3 + ax + b";
	int a, b, x0, y0, p, i, lam, mang1[2], mang2[2], x3, y3; //mang1[0] = x1, mang1[1] = y1; mang2[0] = x2, mang2[1] = y2
	cout << "\nNhap vao a: "; cin >> a;
	cout << "\nNhap vao b: "; cin >> b;
	cout << "\nKiem tra diem P(x0, y0) la cap bao nhieu tren duong tron elptic: ";
	cout << "\nNhap vao x0: "; cin >> x0;
	cout << "\nNhap vao y0: "; cin >> y0;
	cout << "\nKhong gian mod(p) = "; cin >> p; 

	//Tinh truong hop dau tien de xet vong while
	cout << "\n\n k = 1: ";
	cout << "P(" << x0 << "; " << y0 << ")\n";

	ld.tu = (3*x0*x0 + a) % p;
	ld.mau = (2 * y0) % p;
	while(ld.tu > p) ld.tu = ld.tu - p;
	while(ld.tu < 0) ld.tu = ld.tu + p;
	while(ld.mau > p) ld.mau = ld.mau - p;
	while(ld.mau < 0) ld.mau = ld.mau + p;
	lam = (ld.tu % p * euclide(ld.mau,p)) % p;
	
	x3 = lam * lam - x0 - x0;
	while(x3 > p) x3 = x3 - p;
	while(x3 < 0) x3 = x3 + p;
	y3 = lam*(x0 - x3) - y0;
	while(y3 > p) y3 = y3 - p;
	while(y3 < 0) y3 = y3 + p;

	//x3, y3 chinh la gia tri 2P() = (x3, y3)
	int dem = 1;

	while(ld.mau != 0){
		dem++;
		cout << "\nk = " << dem << ": ";
		cout << dem << "P(" << x3 << "; " << y3 << ")\n";
		//Chia lam 3 truong hop!

		if(x3 == x0 && y3 == y0){ // truong hop bang nhau
			ld.tu = (3*x3*x3 + a) % p;
			ld.mau = (2 * y0) % p;
			while(ld.tu > p) ld.tu = ld.tu - p;
			while(ld.tu < 0) ld.tu = ld.tu + p;
			while(ld.mau > p) ld.mau = ld.mau - p;
			while(ld.mau < 0) ld.mau = ld.mau + p;
			lam = (ld.tu % p * euclide(ld.mau,p)) % p;
	
			x3 = lam * lam - x0 - x0;
			while(x3 > p) x3 = x3 - p;
			while(x3 < 0) x3 = x3 + p;
			y3 = lam*(x0 - x3) - y0;
			while(y3 > p) y3 = y3 - p;
			while(y3 < 0) y3 = y3 + p;
		}
		else if(x3 == x0 && y3 != y0){
			//cout << "\n" <<dem; //Muc dich cua chuong trinh duoc thuc thi
			ld.mau = 0;
		}
		else{

			ld.tu = y3 - y0;
			ld.mau = x3 - x0;

			while(ld.tu > p) ld.tu = ld.tu - p;
			while(ld.tu < 0) ld.tu = ld.tu + p;
			while(ld.mau > p) ld.mau = ld.mau - p;
			while(ld.mau < 0) ld.mau = ld.mau + p;
			lam = (ld.tu % p * euclide(ld.mau,p)) % p;
			x3 = lam * lam - x3 - x0;
			while(x3 > p) x3 = x3 - p;
			while(x3 < 0) x3 = x3 + p;
			y3 = lam*(x0 - x3) - y0;
			while(y3 > p) y3 = y3 - p;
			while(y3 < 0) y3 = y3 + p;
		}
		if(ld.mau == 0) cout <<" \nCap cua p la: " << dem+1 << "\n";
	}
	return 0;
}