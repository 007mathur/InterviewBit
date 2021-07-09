//For32 bits integers the number of options of P is limited to 32.
int Solution::isPower(int A) {
    if(A==0 || A==1) return 1;
    int p=2;
    float t = pow(A,1.0/p);
    while((int)t>1){
        if(t-(int)t==0) return 1;
        p++;
        t = pow(A,1.0/p);
    }
    return 0;   
}