#include <iostream>
#include <string.h>
#include "Cipher.h"

using namespace std;

int main(){
	char h[100], input[100];
	cout << "\nUpercase only";
	cout << "\nNhap vao h: "; fflush(stdin); gets(h);
	cout << "\nNhap vao input: "; fflush(stdin); gets(input);
	int backup[100], i;
	for(i = 0; i<=strlen(h); i++){
		backup[i] = (int(h[i]) - 65 + int(input[i%strlen(input)]) - 65) % 26;
	}
	for(i = 0; i<strlen(h); i++){
		cout << cipherUper[backup[i]] << "";
	}
	return 0;
}