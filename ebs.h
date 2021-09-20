int chia(int a, int b, int p){
    if (b == 0){
        return 1;
    }
    else if (b == 1){
        return a %p;
    }
    else {
        int x = chia(a, b/2, p);
        if((b % 2) == 0){
            return (x*x)%p;
        }
        else {
            return (((x*x)%p)*a)%p;
        }
    }
}
