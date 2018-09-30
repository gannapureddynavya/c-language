#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,rem,count;
clrscr();
printf("enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
count=0;
rem=n%i;
if(rem==0)
{
count++;
}
}

if(count==2)
{
printf("the given no.is prime %d",i);
}
else
{
printf("the given no.is not prime");
}
}
