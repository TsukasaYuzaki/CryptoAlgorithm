#include <iostream>
#include "D:\\ThuattoanATTT\\CryptoAlgorithm\\ebs.h"
#include "D:\\ThuattoanATTT\\CryptoAlgorithm\\euclide.h"

using namespace std;

int main(){
    int p;
    cout << "Thuat toan tim tat ca phan tu sinh cua Zp*";
    cout << "\nNhap vao p: "; cin >> p;
  //  cout << "\nTap cac phan tu cua Zp*: ";
    int ptzp[1000], i;
    for (i = 0; i<1000; i++){
        ptzp[i] = 0;
    }
    int j, k = 0;
    for (i = 1; i<p ;i++){
      //  for (j = 1; j< p; j++){
            if(euclide(i, p) != 0){
                //cout << i << " " << j << " \n";
                ptzp[k] = i;
                k++;
            }
       // }
    }
//    /*
    for (i = 0; ptzp[i] != 0 ;i++){
        cout << ptzp[i] << " ";
    }
 //   */
    //Dem So pt trong Zp

    int dem = 0;
    for (i = 0; ptzp[i] != 0 ;i++){
        dem = dem + 1;
    }
    cout << "\nCo "<< dem << " phan tu";


    cout << "\n";
    //tao 2 ptzp[]
    int ptzp2[1000];
    for(i = 0; i< 1000;i++){
        ptzp2[i] = 0;
    }
    for(i = 0 ; ptzp[i] != 0; i++){
        ptzp2[i] = ptzp[i];
      //  cout << ptzp2[i] << " ";
    }
   // cout << "\n";




//Kiem tra Pt Sinh
    int dem2 = 0;
    int coPTSinh = 0, demDu = 0, e, f = 0;
    for (i = 0; ptzp2[i] != 0 ;i++){
        demDu = 0;
        //Moi vong lap se reset ptzp 1 lan
        for(int reset = 0; ptzp2[reset] != 0; reset++){
            ptzp[reset] = ptzp2[reset];
        }

        for(e = 0; e <p; e++){
            for(int si = 0; si<p; si++){
                if(chia(ptzp2[i], si, p) == ptzp[e]){
                    ptzp[e] = 0;
                    demDu++;
                    //cout << dem << " ";
                }
            }
        }


       //r cout << demDu << "\n";
        if(demDu == dem){
            dem2++;
            cout << ptzp2[i] << " ";
        }
    }
    if(dem2 == 0) cout << "\nKhong co pt sinh";
    else cout << "\nCo " << dem2 << " phan tu sinh";
    return 0;
}
