#include<stdio.h>
int main()
{
   int n,i;
   scanf("%d", &n);
   printf("\n");
   int arr[n];
   for(i=0;i<n;i++)
      scanf("%d", &arr[i]);
   printf("\n");
   for(i=n-1;i>=0;i--)
      printf("%d\t", arr[i]);

return 0;
}

