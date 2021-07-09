//A palindrome is an object which is the mirror image of itself.
//In this problem I reversed the given number and checked weather the given number is equal to th reversed integer.
int Solution::isPalindrome(int A) {
    if(A<0) return 0;
    int x = A;
    int d = 0;
    while(x){
        d++;
        x /=10;
    }
    int ans = 0;
    x = A;
    for(int i=d;i>0;i--){
        int k = (int) x/(pow(10,i-1));
        ans += (k*pow(10,d-i));
        x = x - (k*(pow(10,i-1)));
    }
    if(ans == A) return 1;
    return 0;
}