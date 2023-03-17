#include<stdio.h>
#define N 10
int main()
{
   int arr[N]={3,4,6,2,56,67,7,45,23,22};
   int i,l,l_index,s,s_index;
   l=arr[0];
   for(i=0;i<N;i++){
   if(l<arr[i]){
     l=arr[i];
     l_index=i;
   }
  if(l>arr[i]){
   s=arr[i];
   s_index=i;
  }

   }
   printf("The large number is: %d\t  The large number index:%d\n", l,l_index);
   printf("The small number is: %d\t  The small number index: %d\n", s,s_index);
}

