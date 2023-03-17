#include<stdio.h>
int main()
{
   int n;
   printf("Enter the number: ");
   scanf("%d", &n);
   int result=fact(n);
   printf("Factorial of %d is =%d", n,result);

}
int fact(j)
{
   if(j==1)
      return 1;

   else
      return j*fact(j-1);

}

