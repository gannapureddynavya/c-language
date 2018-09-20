#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,choice;
clrscr();
printf("enter any two no.s");
scanf("%d%d%d",&a,&b,&choice);
printf("\n 1.Addition");
printf("\n 2.substraction");
printf("\n 3.Multiplication");
printf("\n 4.Division");
if(choice==1)
{
printf("the addition of two no.s is %d",a+b);
}
else if(choice==2)
{
printf("the sub of two no.s is %d",a-b);
}
else if(choice==3)
{
printf("the mul of two no.s is %d",a*b);
}
else if(choice==4)
{
printf("the div of two no.s is %d",a/b);
}
else
{
printf("\ninvalid operation");
}
}


