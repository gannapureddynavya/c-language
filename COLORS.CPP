#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter the character: vibgyor");
scanf("%c",&ch);

if(ch=='v'||ch=='V')
{
printf("violet");
}
else if(ch=='i'||ch=='I')
{
printf("indigo");
}
else if(ch=='b'||ch=='B')
{
printf("blue");
}
else if(ch=='g'||ch=='G')
{
printf("green");
}
else if(ch=='y'||ch=='Y')
{
printf("yellow");
}
else if(ch=='o'||ch=='O')
{
printf("orange");
}
else if(ch=='r'||ch=='R')
{
printf("red");
}
else
{
printf("invalid input");
}
}
