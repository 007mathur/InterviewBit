string Solution::findDigitsInBinary(int A) {
    string binary;
    if(A==0){
        return "0";
    }
    while(A>0){
        int r = A%2;
        binary += to_string(r);
        A /=2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}