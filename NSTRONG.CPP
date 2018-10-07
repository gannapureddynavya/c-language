#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,fact,m,sum;
	clrscr();
	printf("enter n value");
	scanf("%d",n);
	for(i=1;i<=n;i++)
{
	fact=1,m=i,sum=0;
	for(j=1;j<=i;j++)
{
     fact=fact*j;
     m=m/10;
     sum=sum+fact;
     }
     if(sum==i)
     {
     printf("the n strong no.s are %d\n",fact);
		}
	}
}

