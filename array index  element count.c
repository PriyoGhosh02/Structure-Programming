#include<stdio.h>
#define N 10
int main()
{
   int  i,num,rem;
   int arr[N]={0};
   scanf("%d", &num);
   for(i=0;num!=0;i++){
      rem=num%10;
      arr[rem]++;
      num=num/10;

   }
   for(i=0;i<N;i++){

      if(arr[i]>=0)
         printf("%d\t%d\n", i,arr[i]);
   }


}
