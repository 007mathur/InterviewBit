//This code merely programs the basic mathematical method behind finding the GCD of two integers.
int Solution::gcd(int A, int B) {
    if (B==0){
        return A;
    }
    return gcd(B, A%B);
}
