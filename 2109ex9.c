/*authour: bavesh
  date:22-09-23
  purpose:to find the number of digits in a number*/
#include <stdio.h>
int main()
{
 int a,s;
s=0;
 printf("enter number:");
 scanf("%d",&a);

while(a>0){

a=a/10;
s++;
}

printf("%d",s);

}
