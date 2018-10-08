#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,j,fact,m,sum,temp;
clrscr();
for(i=0;i<5;i++)
	{
	printf("enter the elements of [%d]:",i);
	scanf("%d",&a[i]);
}
	for(i=0;i<5;i++)
	{
	temp=a[i];
	sum=0;
	while(temp!=0)
	{
	fact=1;
	m=temp%10;
	for(j=1;j<=m;j++)
	{
	fact=fact*j;
	}
	sum=sum+fact;
	temp=temp/10;
	}
    if(sum==a[i])
{
printf("the strong no.s in the array are ");
printf("%d\n",a[i]);
	}
   }

}