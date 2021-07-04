#include<bits/stdc++.h>

vector<int> Solution::allFactors(int A) {
    vector<int> B,C; 
    for(int i=1;i<=sqrt(A);i++){
        if(A%i == 0){
            B.push_back(i);
            if(i != sqrt(A)){
                C.push_back(A / i);
            }
        }
    }
    for(int j=C.size()-1;j>=0;j--){
        B.push_back(C[j]);
    }
    return B;
}
