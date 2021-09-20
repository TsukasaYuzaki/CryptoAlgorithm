int gcd(long long a, long long b) {
    if (a == b){
        return 1;
    }
    else{
    while (a != b) {
        if (a > b){
            a = a - b;
        }
        else{
            b = b - a;
        }
    }
    return a;
    }
}
