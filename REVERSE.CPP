#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,reverse;
clrscr();
printf("enter n value");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
n=n/10;
printf("%d",rem);
reverse=(reverse*10)+rem;
}
}
