#include <iostream>
#include "Nguyento.h"
#include <math.h>
#include "ebs.h"
#include "euclide.h"

using namespace std;

int phi(int n){
    int  i;
    float arr[100];
    for (i = 0; i<100; i++){
        arr[i] = 0;
    }
    float a = n;
    int so = 0;
    if(nguyento(n) == 1){
        int backup = n;
        for (i = 2; i<n; i++){
            if(backup % i == 0){
                arr[so] = i;
               // cout << i << " ";
                so++;
                while(backup % i == 0){
                    backup = backup / i;
                }
            }
        }
        cout << "\n";
        for(i = 0; arr[i] != 0; i++){
            a = round((a*((float)1 - (float)((float)1/(float)arr[i]))));
        }
        return a;
    }
    else return n - 1;

}

int main(){
    //cout << chia(47, 211, 1517);
    int n, q, p,e, m, d, i, j;
    cout << "c(encrypt) = m ^ r mod n";
    cout << "\nn = p * q";
    cout << "\n";
    //cout << ((float)1/(float)4);
   // cout << phi(1517);
    cout << "\nm = "; cin >> m;
    cout << "\np = "; cin >> p;
    cout << "\nq = "; cin >> q;
    n = p * q;
    cout << "\ne = "; cin >> e;
    cout << m << " duoc ma hoa RSA = " << chia(m, e, n);
    d = euclide(e, phi(n));
    cout << "\nGia ma RSA: d = " << d << " Gia tri giai ma = " << chia(chia(m, e, n), d, n);
    return 0;
}
