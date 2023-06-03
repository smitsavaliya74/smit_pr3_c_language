#include<stdio.h>
#include<conio.h>

void main ()
{
   int n,first,last,sum;
   clrscr();
   printf("Enter a three digit number: ");
   scanf("%d",&n);
   first=n/100;
   last=n%10;
   sum =first+last;
   printf("sum of first and last digit of number=%d",sum);

   getch();
}