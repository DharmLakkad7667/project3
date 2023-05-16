#include<stdio.h>
#include<conio.h>
main()
{
   int c=0,n;
   printf("Enter Number=");
   scanf("%d",&n);
   do
   {
      n/=10;
      c++;
   }whule(n !=0);
   printf("number of digits=-%d",c);

}