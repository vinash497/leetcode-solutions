int divide(int dividend, int divisor) {
     if(dividend == -2147483648 && divisor == -1)   return INT_MAX;
    long n = dividend/divisor;
    return (int)n;
}
