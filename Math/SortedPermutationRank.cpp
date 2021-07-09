/* If the first character is X, all permutations which had the first character less than X would come before this permutation when sorted lexicographically.

Number of permutation with a character C as the first character = number of permutation possible with remaining N-1 character = (N-1)!

Then the problem reduces to finding the rank of the permutation after removing the first character from the set.

Hence,

rank = number of characters less than first character * (N-1)! + rank of permutation of string with the first character removed
*/
int fact(int val){
    int s=1;
    if(val==1 || val==0)
        return 1;
    else{
        while(val>0){
            s=(s% 1000003)*(val% 1000003);
            val--;
        }
    }
    return s;
}
int Solution::findRank(string A) {
    long long int sum=0;
    for(int i=0;i<A.length();i++){
        long long int cnt=0;
        for(int j=i+1;j<A.length();j++){
            if(A[j]<A[i]){
                // cout<<A[i]<<" "<<A[j-1]<<endl;
                cnt++;
            }
        }
        sum=sum+(fact(A.length()-i-1)*cnt)% 1000003;
    }
    return (sum+1)% 1000003;
}