int reverse(int num){
    int reversed = 0;
    while(num != 0){
        if ((reversed > INT_MAX / 10) || (reversed < INT_MIN / 10)) 
        return 0;
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}
