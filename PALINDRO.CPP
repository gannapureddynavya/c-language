#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,value,reverse=0;
clrscr();
printf("enter n value");
scanf("%d",&n);
value=n;
while(n!=0)
{
rem=n%10;
reverse=(reverse*10)+rem;

n=n/10;
}
if(value==reverse)
{
printf(" %d the give no.is a palindrome",value);
}else
{

printf("%d is not a palindrome",value);
}
}