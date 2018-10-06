#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[5];
clrscr();
for(i=0;i<5;i++)
{
printf("enter [%d] element value:",i);
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
}