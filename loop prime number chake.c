#include<stdio.h>
int main()
{
   int num,i,cou=0;
   printf("Enter the number ");
   scanf("%d", &num);

   for(i=2;i<num;i++){
      if(num%i==0){
      cou++;
  break;
   }

}
   if(cou==0)
      printf("%d is prime number.", num);

   else
      printf("%d is not prime.", num);


}

