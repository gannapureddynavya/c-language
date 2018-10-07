#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,j,m,fact,sum;
clrscr();
for(i=0;i<5;i++)
{
printf("enter the elements of [%d] value:",i);
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
fact=1;
sum=0;
m=i;
for(j=0;j<a[i];j++)
{
fact=fact*j;
m=m/10;
sum=sum+fact;
}
if(sum==a[i])
{
printf("the strong no.s in the array are %d:",a[i]);
}
printf("\n");
}
}
