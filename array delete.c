#include<stdio.h>
int main(){
int i,n,pos,a[100];
printf("Enter the array element number: ");
scanf("%d", &n);
printf("Enter the array element: ");
for(i=0;i<n;i++)
    scanf("%d", &a[i]);

    printf("Enter deleting positon:");
    scanf("%d", &pos);

    for(i=pos-1;i<n-1;i++)
        a[i]=a[i+1];
    printf("After deleting: ");
    for(i=0;i<n-1;i++)
        printf("%d\t", a[i]);
}
