//Logic behind this operation is:
//Multiply the matrix A n times to obtain matrix B.
//A = [1 1]
//    [1 0]
//B = [F(n+1) F(n)]
//    [F(n)   F(0)]
const int MODVAL = 1000000007;
vector<long> vec_one{1,1,1,0};

vector<long> operator*(vector<long > a, vector<long> b) {
    return {
        ( long( a[0] * b[0] )%MODVAL + long( a[1] * b[2] )%MODVAL)%MODVAL,
        ( long( a[0] * b[1] )%MODVAL + long( a[1] * b[3] )%MODVAL)%MODVAL,
        ( long( a[2] * b[0] )%MODVAL + long( a[3] * b[2] )%MODVAL)%MODVAL,
        ( long( a[2] * b[1] )%MODVAL + long( a[3] * b[3] )%MODVAL)%MODVAL
    };
}

vector<long> power(int n) {
    if(n == 1)        return vec_one;
    vector<long> nby2 = power(n/2);
    return n%2 ? (nby2 * nby2 * vec_one) : (nby2 * nby2);
}

int Solution::solve(int A) {    
    return power(A-1)[0];
}