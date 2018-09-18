#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter the values of a,b");
scanf("%d%d",&a,&b);
if(a>b)
{
printf("a is big %d",a);
}
if(b>a)
{
printf("b is big %d",b);
}
}