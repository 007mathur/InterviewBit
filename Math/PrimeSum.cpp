bool isPrime(int N){
    int k = (int)sqrt(N);
    if(N==0 || N==1) return false;
    for(int i=2;i<=k;i++){
        if(N%i == 0) return false;
    }
    return true;
}

vector<int> sieve(int A) {
    vector<bool> cond;
    vector<int> val;

    for(int i=0;i<=A;i++){
        cond.push_back(true);
    }
    
    cond[0] = false;

    for(int i=2;i<=sqrt(A);i++){
        if(cond[i] == true){
            for(int j=2;i*j<=A;j++){
                cond[i*j] = false;
            }
        }
    }

    for(int i=2;i<cond.size();i++){
        if(cond[i]){
            val.push_back(i);
        }
    }

    return val;
}

vector<int> Solution::primesum(int A) {
    vector<int> ans;
    if(A==4){
        ans.push_back(2);
        ans.push_back(2);
        return ans;
    }
    int mid = (int) A/2;
    vector<int> primes = sieve(A);
    int n = primes.size();
    for(int i=1;i<n;i++){
        if(isPrime(A-primes[i])){
            ans.push_back(primes[i]);
            ans.push_back(A-primes[i]);
            return ans;
        }
    }   
}