#include<stdio.h>
int main()
{
   int N,i,count=0,j,sum=0,p,rem;
   scanf("%d", &N);

printf("prime numbers : ");
      for(i=0;N!=0;i++){
            rem=N%10;
      p=rem;
      N=N/10;
            count=0;
         for(j=1;j<=p;j++)
         if(p%j==0)
         count++;

      if(count==2){
            printf("%d\t", p);
         sum=sum+p;
      }

      }
printf("\nSUM= %d", sum);

}


