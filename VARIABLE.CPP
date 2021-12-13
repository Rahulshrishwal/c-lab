#include<stdio.h>
#include<conio.h>
void main()
{ char c;
 clrscr();
 printf("enter the character ");
 scanf("%c",&c);
 if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
 printf("enter character is variable%c",c);
 else
 printf("enter character is not variable");
 getch();
 }