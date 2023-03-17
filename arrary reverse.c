#include<stdio.h>
int main()
{
   int i,temp,n;
   scanf("%d", &n);
printf("\n");
   int arr[n];
   for(i=0;i<n;i++){
      scanf("%d", &arr[i]);
   }
printf("\n");
   for(i=0;i<=n/2;i++){
      temp=arr[i];
      arr[i]=arr[n-1-i];
      arr[n-1-i]=temp;
   }
   for(i=0;i<n;i++){
      printf("%d\t", arr[i]);
   }
    printf("\n");

}
