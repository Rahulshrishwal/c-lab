#include<stdio.h>
#include<conio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
void main()
{ int a,b,c,ch;
clrscr();
printf("enter 2 variables");
scanf("%d%d",&a,&b);
printf("enter your choice1.add,2.sub,3.multiplication,4.divison");
scanf("%d",ch);
switch(ch)
{ case 1:c=add(a,b);
	 printf("addition is=%d",c);
	 break;
  case 2:c=sub(a,b);
	 printf("difference is=%d",c);
	 break;
  case 3: c=mul(a,b);
	  printf("multiplication is=%d",c);
	  break;
  case 4: c=div(a,b);
	  printf("divison is=%d",c);
	  break;
  default:printf("wrong choice");
   break;
   }
  getch();
  }
  int add(int a,int b)
  { int c;
   c=a+b;
   return c;
   }
 int sub(int a,int b)
 { int s;
  s=a-b;
  return s;
  }
int mul(int a,int b)
{ int m;
m=a*b;
return m;
}
int div(int a,int b)
{ int d;
d=a/b;
return d;
}