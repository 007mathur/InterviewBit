//In a factorial a zero arises from the multiplication of 2*5.
//Every second number is even, so there are abundant 2s in the sea of prime factors of numbers.
//5s can be counted by adding all the factors of power of 5.
//As the numbers of 5s are less, the number of 0s is equal to this sum.
int Solution::trailingZeroes(int A) {
    int ans=0;
    for(int i=5;i<=A;i=i*5){
        int temp = A/i;
        ans += temp;
    }
    return ans;
}