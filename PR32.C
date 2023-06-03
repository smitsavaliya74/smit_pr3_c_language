#include<stdio.h>
#include<conio.h>

void main ()
{
  int a;
  int i = 0;
  clrscr();

  printf("Enter any number: ");
  scanf("%d",&a);

  do
  {
   i++;
   a=a/10;


  }while(a!=0);
  printf("This number is %d digit number",i);

  getch();
}