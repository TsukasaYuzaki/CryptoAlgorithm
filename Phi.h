
#include "Nguyento.h"
#include <math.h>


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
      //  cout << "\n";
        for(i = 0; arr[i] != 0; i++){
            a = round((a*((float)1 - (float)((float)1/(float)arr[i]))));
        }
        return a;
    }
    else return n - 1;

}
