#include<stdio.h>
int main()
{
   char st[]="priyo";
   dis(st);

}
void dis(char s[])
{
   int i;
   for(i=0;s[i]!='\0';i++)
   printf("%c", s[i]);
}
