//This is simple proble to find number of combinations.
//As the only allowed directions are down and right the solution is (A+B-2)C(A-1) or (A+B-2)C(B-1).
int Solution::uniquePaths(int A, int B) {
    long long ans=1;
    for(int i=A;i<(A+B-1);i++){
        ans *= i;
        ans /= (i - A+1);
    }
    return ans;
}