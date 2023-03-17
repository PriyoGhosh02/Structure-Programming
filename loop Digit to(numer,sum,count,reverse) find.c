#include<stdio.h>
int main()
{

   int n,number=0,sum=0,count=0;
   scanf("%d", &number);
   while(number){
      n=number%10;
      number=number/10;
      if(n%2==1){
printf("\nNumbers=%d\n", n);
sum=sum+n;
      }


   }
  printf("\nSum=%d\n", sum);

   return 0;
}

