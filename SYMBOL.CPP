#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
char choice;
clrscr();
printf("enter choice");
scanf("%c",&choice);
printf("enter a value");
scanf("%d",&a);
printf("enter b value");
scanf("%d",&b);
printf("\n + addition");
printf("\n - substraction");
printf("\n * multiplication");
printf("\n / division");
if(choice=='+')
{
printf("the addition of two no.s is%d" ,a+b);
}
else if(choice=='-')
{
printf("the substraction of two no.s is%d" ,a-b);
}
else if(choice=='*')
{
printf("the multiplication of two no.s is%d", a*b);
}
else if(choice=='/')
{
printf("the division of two no.s is%d" ,a/b);
}
else
{
printf("invalid operation");
}
}