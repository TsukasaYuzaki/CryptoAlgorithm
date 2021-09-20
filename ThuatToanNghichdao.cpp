#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    long a, p;
    int y0 = 0, y1 = 1, y = 0;
    int r, q;
    cout << "Nhap vao p: "; cin >> p;
    cout << "\nNhap vao so lay nghich dao:(Phai nam trong khoang 1->p-1) "; cin >> a;
    int backupa = a, backupp = p;
    if (1<a && a<p){
        while (a > 0){
            r = p % a;
            if (r == 0){
                break;
            }
            q = p / a;
            y = y0 - y1*q;
            y0 = y1;
            y1 = y;
            p = a;
            a = r;
        }
    }
    else{
        cout << "\nSo khong hop le.";
    }
    if(y < 0) y = y + backupp;

    if(backupa * y % backupp == 1)
        cout << "Gia tri " << backupa << "^-1 mod " << backupp << " = " << y;
    else cout << "Khong co";
    return 0;
}
