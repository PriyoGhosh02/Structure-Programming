#include<stdio.h>
int main()
{
   int arr[100],N,i,count=0,j,M=0,m=0;

   scanf("%d", &N);

   for(i=0;i<N;i++)
      scanf("%d", &arr[i]);

      for(i=0;i<N;i++){
            count=0;
         for(j=1;j<=arr[i];j++)
         if(arr[i]%j==0)
         count++;

      if(count==2){
         printf("%d is prime number\n", arr[i]);
         M++;
      }
      else{
         printf("%d is not prime\n", arr[i]);
m++;
      }

      }
printf("There are %d prime numbers\n", M);
printf("There are %d not prime numbers\n", m);

}
