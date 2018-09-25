#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter characters of vibgyor");
scanf("%c",&ch);
switch(ch)
{
case'v':Printf("violet");
	break;
case'V':printf("violet");
	break;
case'i':printf("indigo");
	break;
case'I':printf("indigo");
	break;
case'b':Printf("blue");
	break;
case'B':printf("blue");
	break;
case'g':printf("green");
	break;
case'G':printf("green");
	break;
case'y':Printf("yellow");
	break;
case'Y':printf("yellow");
	break;
case'o':printf("orange");
	break;
case'O':printf("orange");
	break;
case'r':printf("red");
	break;
case'R':printf("red");
	break;
default:printf("invalid character");
	break;
}
}