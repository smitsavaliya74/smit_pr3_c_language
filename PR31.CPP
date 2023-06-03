#include<stdio.h>
#include<conio.h>

void main ()
{
  char x = 'a';
  clrscr();

  do
  {
    printf("%c\t",x);
    x=x+4;

  } while(x<='z');

  getch();
}