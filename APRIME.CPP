#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,j,count;
clrscr();
for(i=0;i<5;i++)
{
printf("enter the elements of [%d]:",i);
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
count=0;
for(j=2;j<a[i];j++)
{

if(a[i]%j==0)
{
count++;
}
if(count==0)
{
printf(" %d",a[i]);
}
}
}
}