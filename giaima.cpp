#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char cipherUper[27] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char h[20] = "KLSQSOSCW";
	int i, backup[20];
	for(i = 0; i< strlen(h); i++){
		backup[i] = h[i] - 65;
	}
	for(int j = 1; j < 100; j++){
		cout << "j = " << j << ": ";
		for(i = 0; i< strlen(h); i++){
			cout << (cipherUper[(backup[i] + j) % 26]);
		}
	cout << "\n";
	}

	return 0;
}