int euclide(int a, int p){ //a^-1mod p
    int y0 = 0, y1 = 1, y = 0;
    int r, q;
    int backupa = a, backupp = p;
    if(a == 1) return 1;
    else{
    if (1<a && a<p){
        while (a > 0){
            r = p % a;
            if (r == 0){
                break;
            }
            q = p / a;
            y = y0 - y1*q;
            y0 = y1;
            y1 = y;
            p = a;
            a = r;
        }
    }
    if(y < 0) y = y + backupp;
    if(backupa * y % backupp == 1)
        return y;
    else return 0;
}
}
