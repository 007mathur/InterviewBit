vector<int> Solution::sieve(int A) {
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