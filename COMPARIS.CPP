  #include<stdio.h>
  #include<conio.h>
  void main()
  {
  int a,b,c;
  clrscr();
  printf("enter the values of a,b,c");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b && a>c)
  {
  printf("a is big %d",a);
  }
  else if(b>c)
  {
  printf("b is big %d",b);
  }
  else
  {
  printf("c is big %d",c);
  }
  }