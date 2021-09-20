#include <iostream>
#include "ebs.h"
#include <math.h>
#include "euclide.h"

using namespace std;
//ceil(sqrt(101))
int main(){
    int x, g, a, p, m, j, i, *firstval, *seconval, y;

    cout << "x = log (g) a on Zp";
    cout << "\ng = "; cin >> g;
    cout << "\na = "; cin >> a;
    cout << "\np = "; cin >> p;

    m = ceil(sqrt(p));

    firstval = new int[m];
    seconval = new int[m];

    for(j = 0; j<m; j++){
        firstval[j] = chia(g, j, p);
        cout << firstval[j] << " ";
    }
    cout << "\n";
    y = euclide(g, p);
    y = chia(y, m, p);

    for(i = 0; i<m; i++){
        seconval[i] = ((a%p) * chia(y, i, p)) % p;
        cout << seconval[i] << " ";
    }

    for(j = 0; j<m; j++){
         for(i = 0; i<m; i++){
            if(firstval[j] == seconval[i])
                x = m*i + j;
         }
    }

    cout << "\nlog(" << g << ") " << a << " on Z" << p << " = "<< x;

    return 0;
}
