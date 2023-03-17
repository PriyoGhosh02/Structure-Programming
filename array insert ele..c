#include<stdio.h>
int main()
{
   int arr[10],n,value,pos,i;
   scanf("%d", &n);
   for(i=0;i<n;i++)
      scanf("%d", &arr[i]);

   for(i=0;i<n;i++)
      printf("%d", arr[i]);

   printf("Enter the pos and value:");
   scanf("%d %d", &pos,&value);

   for(i=n-1;i>=pos-1;i--)
      arr[i+1]=arr[i];

      arr[pos-1]=value;

   for(i=0;i<=n;i++)
      printf("%d", arr[i]);

}
