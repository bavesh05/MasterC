/*authour: bavesh
  date:23-09-23
  purpose:to print the sum of first and last digits of a number*/
#include<stdio.h>
int main()
{
 int a,n;
 printf("enter number:");
 scanf("%d",&a);
 n=a;

 while(a>10){
 a=a/10;
}

 n=n%10;

 printf("%d",a+n);
}
