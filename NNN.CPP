#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n;
clrscr();
printf("enter n value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=1;j<=n-i;j++)
{

printf("%2d",j);
}
for(j=1;j<n-1;j++)
{
printf("");
}
for(k=j-i;k>=1;k--)
{
printf("%2d",k);
}
printf("\n");
}
getch();
}

