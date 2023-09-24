/*authour: bavesh
  date:23-09-23
  purpose:to find the first and last digit of a function*/
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
 printf("fd:%d",a);

n=n%10;

 printf("ld:%d",n);
}
