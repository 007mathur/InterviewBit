/*
This question is simple if you understand how we are dividing the cities.

Let’s say we start with (a_1, a_2, a_3,…, a_k) as visited cities. Let all cities be (1,2,…,n). Also, let’s denote cities between a_i and a_i+1 as X_i. Here, X_0 denotes cities before the first visited city. X_k denotes unvisited cities after a_k.

Now there are total n-k unvisited cities. We can visit them in (n-k)! ways.

We can not visit cities between a_i and a_i+1 in all possible ways for all i’s. We have counted all permutations in (n-k)!. So, we need to divide it with X_i for all i’s.

This will lead to the expression (n-k)!/(X_0! * X_1! * … *X_k!).

There are more than one way of visiting cities between the two visited cities. Precisely, there are 2^(X_i-1) ways to visit for all i. Thus we need to multiply with X_i’s.

Here we need to remember that there is only one way to visit X_0 and X_k.

The final formula becomes ((n-k)!/(X_0!X_2!…X_(k-1)!) )(2^(X_1 -1 + X_2 - 1 + X_3 - 1 + … + X_(k-1)-1))

The same solution is present as the editorial for this question. You have to remember that ((X_0 + X_1)C(X_1))((X_0+X_1+X_3)C(X_3))….((n-k)C(X_k)) is same as ((n-k)!/(X_0!X_2!…*X_(k-1)!) ).
*/
#define ll long long
#define MOD 1000000007

ll powmod(ll base,ll exponent)
{
    if(exponent<0) exponent+=MOD-1;
    ll ans=1;
    while(exponent){
        if(exponent&1)ans=(ans*base)%MOD;
        base=(base*base)%MOD;
        exponent/=2;
    }
    return ans;
}

int Solution::solve(int A, vector<int> &B) {
    sort(B.begin(),B.end());
    long long fact[10000];
    fact[0] = 1;
    #define mod 1000000007
    for(int i = 1;i < 10000;i++){
        fact[i] = (fact[i-1]*i)%mod;
    }
    vector<long long> vs;
    long long n = B.size();
    vs.push_back(B[0]-1);
    for(int i = 1;i < n;i++){
        vs.push_back(B[i]-B[i-1]-1);
    }
    vs.push_back(A-B[n-1]);
    long long ans = 1;
    long long sum = 0,pro = 1;
    for(int i = 0;i < vs.size();i++){
        if(vs[i] == 0) continue;
        if(i != 0 && i != vs.size()-1) ans = (ans*powmod(2,vs[i]-1))%mod;
        sum = (sum + vs[i])%mod;
        pro = (pro*fact[vs[i]])%mod;
    }
    ans = (ans * fact[sum])%mod;
    ans = (ans * powmod(pro,mod-2))%mod;
    return ans;
}