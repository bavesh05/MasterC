/*authour: bavesh
  date:22-09-23
  purpose: to print the sum of all the even numbers between one to n*/
#include <stdio.h>
int main()
{
 int a,n,s;
 a=1;
 s=0;
 printf("enter number n:");
 scanf("%d",&n);

 while(a<=n){

 if(a%2==0){

 s=s+a;

}
 a++;
}

printf("%d",s);

}
