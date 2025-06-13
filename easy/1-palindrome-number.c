bool isPalindrome(int x) {
    if (x < 0) return false;
    int remainder;
    long long reversed = 0;
    int original =  x;
    while(x != 0){
        remainder = x % 10;
        reversed = reversed * 10 + remainder;
        x/=10;
    }
    return  original == reversed;
}
