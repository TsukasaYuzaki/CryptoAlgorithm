#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char h[100];
    char cipherUper[27] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char cipherLower[27] = "abcdefghijklmnopqrstuvwxyz";
    char cipherboth[63] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    cout << "input a char: "; fflush(stdin); gets(h);//h = getchar();
    int i, ok = 0;
    for (i = 0; i<strlen(h); i++){
        for(int j = 0; j < strlen(cipherUper); j ++ )
            if(((int)cipherUper[j]) == (int)h[i]) cout << j << " ";
    }
    cout << "\n" ;
    //cout << h << " in cipher = " << ok;
    return 0;
}
