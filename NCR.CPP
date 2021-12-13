#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{int n,r,a,b,c,com=0;
clrscr();
printf("enter the value of n and r");
scanf("%d%d",&n,&r);
a=fact(n);
c=fact(r);
b=fact(n-r);
com=a/(c*b);
printf("value of ncr is=%d",com);
getch();
}
int fact(int a)
{int f=1;
for(int i=1;i<=a;i++)
{ f=f*i;
}
return(f);
}
