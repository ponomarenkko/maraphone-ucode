void mx_printint(int n){
    long a = n;
    if(a < 0){
    write(1, "-", 1);
    }
    a *= -1;
    int m = 0;
    while (a > 0) {
        m = m * 10 + a % 10;
        a = a/10; 
    }
    a = m;
    while(n > 0){
        m = a % 10;
        write(1, m + 48, 1);
        a = a / 10;
    }
}

