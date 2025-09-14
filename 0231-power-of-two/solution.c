bool isPowerOfTwo(int n) {
     int win,cnt=1;
   for(int i=0;i<31;i++){
    win=pow(2,i);
    if(win==n) cnt++;
   }
   if(cnt==2) return true;
   else return false;
}
