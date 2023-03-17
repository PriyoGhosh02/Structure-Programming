
#include <stdio.h>
int main()
{
   int n,rem,count,i;  // variable declaration

   printf("Enter a number");
   scanf("%d",&n);
   for(i=0;n!=0;i++)
   {
         rem=n%10;
   count++;
       n=n/10;

   }

   printf("\nThe number of digits in an integer is : %d",count);
    return 0;
}
