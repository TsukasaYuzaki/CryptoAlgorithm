#include <iostream>

using namespace std;
int main(){
    int i, j, a[2][2], b[2][2];
    cout << "Nhap vao ma tra khoa: ";
    for (i = 0; i<2; i ++){
        for (j = 0; j < 2; j ++){
            cout << "\na[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    cout << "\nNhap vao ma tra text: ";
    for (i = 0; i<2; i ++){
        for (j = 0; j < 2; j ++){
            cout << "\nb[" << i << "][" << j << "] = ";
            cin >> b[i][j];
        }
    }
    int sum, c[2][2], k;
     //phep nhan ma tran
   for (i = 0; i < 2; i++) {
      for (j = 0; j < 2; j++) {
         sum = 0;
         for (k = 0; k < 2; k++) {
            sum = sum + a[i][k] * b[k][j];
         }
         c[i][j] = sum;
         if(c[i][j] >= 26) c[i][j] = c[i][j] % 26;
      }
   }
    cout << "\nChon: \n1.Encode \n2.Decode \nChon: ";
    int choice;
    cin >> choice;
    if (choice == 1){
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                cout << c[i][j] << " ";
            }
            cout << "\n";
        }
    }
    else if(choice == 2){

    }
    else{
        cout << "\nAnh ban a...";
    }
    cout << "\n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << (char)(c[j][i] + 65);
        }
    }
    return 0;
}
