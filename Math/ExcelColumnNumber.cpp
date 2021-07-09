//This is a anice example of converting a number in different base system to Base 10 system.
int Solution::titleToNumber(string A) {
    int k = A.length();
    int s = 0;
    for (const auto& c : A)
    {
        s *= 26;
        s += c  - 'A' + 1;
    }
    return s;
}