#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=5;i++)
{
for(j=65;j>=69-i;j++)
{
printf("%c",j);
}
printf("\n");
}
}