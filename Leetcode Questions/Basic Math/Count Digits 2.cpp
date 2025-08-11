int countDigits(int n){
int cnt = 0;
int original =n;
while(n>0){
   int lastdigit = n%10;
   if(lastdigit!=0 && original%lastdigit == 0){
      cnt++;
   }
   n=n/10;
}
return cnt;
}
