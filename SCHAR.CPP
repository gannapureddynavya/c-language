 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a,b;
 char choice;
 clrscr();
 printf("enter choice");
 scanf("%c",&choice);
 printf("enter a,b value:");
 scanf("%d%d",&a,&b);
 printf("\n + Addition");
 printf("\n - Substraction");
 printf("\n * Multiplication");
 printf("\n / Division");
 switch(choice)
 {
 case '+':printf("the add of two no.s is %d",a+b);
	break;
 case '-':printf("the sub of two no.s is %d",a-b);
	break;
 case '*':printf("the mul of two no.s is %d",a*b);
	break;
 case '/':printf("the div of two no.s is %d",a/b);
	break;
 default:printf("invalid choice");
	break;
}
}
