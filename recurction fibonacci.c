#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int fibonacci=fibo(i);
        printf("%d\t",fibonacci);
    }

}
int fibo(int i)
{
    if(i==0)
        return 0;
    if(i==1)
        return 1;
   else
        return fibo(i-1)+fibo(i-2);
}
