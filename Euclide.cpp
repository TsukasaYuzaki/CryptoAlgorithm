#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    int a, b, d, x, y;
    cout << "Nhap vao a, b";
    cin >> a >> b;
    if(b == 0){
        d = a;
        x = 1;
        y = 0;
    }
    else{
        int q, r, x1,x2, y1, y2;
        x2= 1;
        x1= 0;
        y2 = 0;
        y1 = 1;
        while(b > 0){
            q = a / b;
            r = a - q * b;
            x = x2 - q * x1;
            y = y2 - q * y1;
            a = b;
            b = r;
            x2 = x1;
            x1 = x;
            y2 = y1;
            y1 = y;
        }
        d = a;
        x = x2;
        y = y2;
    }
    cout << d << " " << x << " " << y;
    return 0;
}
