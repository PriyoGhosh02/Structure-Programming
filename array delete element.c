#include<stdio.h>
int main()
{
   int arr[10],n,pos,i;
   scanf("%d", &n);
  for(i=0;i<n;i++)
   scanf("%d", &arr[i]);

  printf("Enter the position: ");
  scanf("%d", &pos);

  for(i=pos-1;i<n-1;i++)
   arr[i]=arr[i+1];

  printf("The new array is: ");
   for(i=0;i<n-1;i++)
      printf("%d", arr[i]);

}

