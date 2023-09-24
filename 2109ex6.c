/*authour: bavesh
  date:20-09-23
  purpose:to find the summ of all numbers between 1 to n*/
#include<stdio.h>
int main()
{
 int a,n,s;
 a=1;
 s=0;
 printf("enter number:");
 scanf("%d",&n);

 while(a<=n){

 s=s+a;
 a++;
}
 printf("%d",s);

}
