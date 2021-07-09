//Logic behind this solution is to consider every bit of all numbers and count the number of 1s.
//Let this number be c. Then the number of 0s on that bit position will be N-c where N is the total number of elements in array.
//Hamming distance = c * (N-c) * 2.
int Solution::hammingDistance(const vector<int> &A) {
    long ans = 0, n=A.size();
    for (int i = 0; i < 32; i++) {
        int count = 0; 
        for (int j = 0; j < n; j++)
            if ( (A[j] & (1 << i)) )
                count++;
        ans += count * (n - count) * 2; 
    }
    return ans % 1000000007;
}