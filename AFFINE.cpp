#include <iostream>
#include <strings.h>
using namespace std;

//Tham ma Affine
//chi encode
int main(){
    char h[50];
    int soh[50];
    cout << "Nhap vao h: ";
    fflush(stdin);
    gets(h);
    for (int i = 0; i<strlen(h); i++){
        soh[i] = (int)h[i] - 65;
    }
    int a, b;
    cout << "\nChon: \n1.Encrypt \n2.Decode: ";
    int choice; cout << "\nChon: ";
    cin >> choice;
    if(choice == 1){
        cout << "\nEncrypt: ";
        cout << "\nNhap vao a: "; cin >> a;
        cout << "\nNhap vao b: "; cin >> b;

        for (int i = 0; i<strlen(h); i++){
            //cout << (a*(soh[i] + b)) % 26 << " ";
            cout << (char)((a*soh[i] + b) % 26 + 65);
        }
    }
    if(choice == 2){
        cout << "\nDecrypt: ";
        cout << "\nNhap vao a^-1: "; cin >> a;
        cout << "\nNhap vao b: "; cin >> b;

        for (int i = 0; i<strlen(h); i++){

            int c = (a*(soh[i] - b) % 26);
            while (c < 0) c = c + 26;
            cout << (char)(c + 65);
        }
    }
    return 0;
}
