//This is a classic example of converting Base 10 to another base system.
string Solution::convertToTitle(int A) {
    string a="";
    while (A>0){
        int p = A%26; 
        if (p==0){ 
            a += 'Z'; 
            A = (A/26)-1; 
        } 
        else{ 
            a += (p-1) + 'A'; 
            A = A/26; 
        } 
    } 
    reverse(a.begin(),a.end());
    return a;
}