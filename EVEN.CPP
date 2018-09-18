#include<stdio.h>
#include<conio.h>
void main()
{
int a,c;
clrscr();
printf("enter the value of a" );
scanf("%d",&a);
c=a%2;

if(c==0)
{
printf("the given no.is even %d",a);
}
if(c!=0)
{
printf("the given no.is odd %d",a);
}
}