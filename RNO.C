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
	for(j=n;j<n-i;j--)
	{
	printf("  ");
	}
	for(j=n-i;j>=1;j--)
	{
	printf("%2d",j);
	}
	 for(k=j+2;k<=n-i;k++)
	{
	printf("%2d",k);
	}
	printf("\n");
	}
	getch();
	}