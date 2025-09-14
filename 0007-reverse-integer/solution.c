int reverse(int x){
    int reverse = 0;
        while(x){
            if(reverse > 214748364||reverse < -214748364) return 0;
            reverse=reverse*10+x%10;
            x/=10;
        }
         return reverse;
}
