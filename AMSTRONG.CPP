#include<stdio.h>
#include<conio.h>
void main()
{
int n,d,sum;
clrscr();
printf("enter n value");
scanf("%d",&n);
while(n!=0)
{
sum=0;
d=n%10;
sum=sum+(d*d*d)/10;
n=n/10;
}
if(sum==n)
{
printf("the no.is amstrong");
}
else
{
printf("the no is not amstrong");
}
}