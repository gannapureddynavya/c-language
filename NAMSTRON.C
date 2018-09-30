#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum,i,m,d;
clrscr();
printf("enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=0;
m=i;
	while(m!=0)
	{
		d=m%10;
		sum=sum+(d*d*d);
		m=m/10;
	}

	if(sum==i)
	{
		printf("the n amstrong no.s are %d\n",i);
	}
   }
}
