int nguyento(int n){
    int i;
    for(i = 2; i<n; i++){
        if(n % i == 0) return 1;
    }
    return 0;
}
