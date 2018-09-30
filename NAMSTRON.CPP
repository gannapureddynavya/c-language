#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum,i,temp;
clrscr();
printf("enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=0;
temp=i;
for(;temp!=n;)
{
d=n%10;
sum=sum+(d*d*d)/10;
}
if(i==sum)
{
printf("the n amstrong no.s are:");
}
}
}