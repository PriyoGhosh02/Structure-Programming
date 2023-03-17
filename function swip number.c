#include<stdio.h>
int  main()
{
   int n;
   scanf("%d", &n);
   num(n);

}
void num(h)
{
   int i,temp,reverse=0;
   for(i=1;h!=0;i++){
      temp=h%10;
      reverse=reverse*10 +temp;
      h=h/10;

   }
      printf("%d",reverse);

}
