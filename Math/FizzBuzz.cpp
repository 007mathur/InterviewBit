//It is a simple problem of classification of numbers on the basis of their factors.
vector<string> Solution::fizzBuzz(int A) {
    vector<string> ans(A);
    for(int i=1; i<=A; i++){
        if(i%3==0 && i%5==0){
            ans[i-1] = "FizzBuzz";
        }
        else if(i%3==0 && i%5!=0){
            ans[i-1] = "Fizz";
        }
        else if(i%3!=0 && i%5==0){
            ans[i-1] = "Buzz";
        }
        else if(i%3!=0 && i%5!=0){
            ans[i-1] = to_string(i);
        }
    }
    return ans;
}