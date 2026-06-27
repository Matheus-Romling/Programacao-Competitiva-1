double esperoquefuncione(double x, int n){
    if(n==0){
        return 1;
    }
    double temp=esperoquefuncione(x, n/2);
    if(n%2==0){
        return temp*temp;
    }else{
        return temp*temp*x;
    }
}

double myPow(double x, int n) {
    if(n==-2147483648){
        return myPow(x,n+1)/x;
    }
    else if(n<0){
        x = 1/x;
        n=-n;
    }
    return esperoquefuncione(x,n);
}
