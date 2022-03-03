#include <stdio.h>
#include <string.h>

/*
crypt = plant ^ keyStream
plant = crypt ^ keyStream
*/


int main(){
	int i;
	int sBox[256];              //S

	for ( i = 0; i < 256; i++ ){
		sBox[i] = i;  //create sBox
	}

	char key[10] = "IAMHUNG123";

	int asciikey[255];

	for( i = 0; i < 256; i++){
		asciikey[i] = (int)( key[i % (strlen(key))] );        //K
	}

	int j = 0, t = 0;
	int tmp;

	for(i = 0; i<255; i++){
		j = (j + sBox[i] + asciikey[i]) % 256;


		tmp = sBox[i];
		sBox[i] = sBox[j];
		sBox[j] = tmp;

	}

	char plantText[15] = "I will end this";  //PT
	int encry[15];

	int len = strlen(plantText);
	int keyStream[len];

	j = 0;
	for(i = 1; i<=strlen(plantText); i++){
		j = (j + sBox[i]) % 256;

		tmp = sBox[i];
		sBox[i] = sBox[j];
		sBox[j] = tmp;

		t = (sBox[i] + sBox[j]) % 256;

		keyStream[i-1] = sBox[t];

	}

	for(i = 0; i<strlen(plantText); i++){
        encry[i] = ((int)plantText[i] ^ (int)keyStream[i]);

		printf("%d ", (int)encry[i]);
	}

	return 0;
}
