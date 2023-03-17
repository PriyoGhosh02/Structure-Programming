#include<stdio.h>
int main()
{
int arr[10],even[10],odd[10],even_count=0,odd_count=0,Sum=0,sum=0,n,i;
scanf("%d", &n);
for(i=0;i<n;i++)
  scanf("%d", &arr[i]);

   for(i=0;i<n;i++)
   printf("%d\t", arr[i]);

   for(i=0;i<n;i++){
      if(arr[i]%2==0){
        even[even_count]=arr[i];
        even_count++;
      }
      else{
         odd[odd_count]=arr[i];
         odd_count++;
      }

   }
      printf("The even count is %d\n", even_count);
      printf("The odd count is %d \n", odd_count);


printf("The even array is ");
for(i=0;i<even_count;i++){
      sum=sum+even[i];
   printf("%d\t", even[i]);
}
printf("SUM of even=%d\n", sum);

printf("The odd array is ");
for(i=0;i<odd_count;i++){
   Sum=Sum+odd[i];
   printf("%d\t", odd[i]);
}
printf("SUM of odd=%d", Sum);




}

