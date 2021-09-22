#include <iostream>

#include <math.h>
#include "ebs.h"
#include "euclide.h"
#include "Phi.h"

using namespace std;

int main(){
    cout << "Giai ma RSA: ";
    int n, q, p, e, c;
    cout << "\np = "; cin >> p;
    cout << "\nq = "; cin >> q;
    cout << "\ne = "; cin >> e;
    cout << "\nEncrypt = "; cin >> c;
    n = q * p;
    int d = euclide(e, phi(n));
    cout << "\nDecrypt = " << chia(c, d, n);
    return 0;
}
