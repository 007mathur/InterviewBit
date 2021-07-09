//If A,B,C,D represents sides of a rectangle then they should comprise of two pairs of equal sides.
//As order is irrelevant I have considered all pessolible combinations of these four sides.
int Solution::solve(int A, int B, int C, int D) {
    if(A==B && C==D) return 1;
    else if(A==C && B==D) return 1;
    else if(A==D && B==C) return 1;
    else return 0;
}