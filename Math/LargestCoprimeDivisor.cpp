int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int Solution::cpFact(int A, int B) {
    int x = A;
    int y = B;
    while(gcd(x,y)!=1){
        x /= gcd(x,y);
    }   
    return x;
}