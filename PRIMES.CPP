#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,count;
clrscr();
printf("enter n  value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
count=0;
for(j=1;j<=n;j++)
{
if(i%j==0)
count++;
}
if(count==2)
printf("the prime no.s upto n are %d\n",i);
}
}