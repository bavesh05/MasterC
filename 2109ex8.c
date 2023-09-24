/*authour:bavesh
  date: 22-09-23
  purpose:to print the sum of odd numbers between 1 to n*/
#include <stdio.h>
int main()
{
 int a,n,s;
 a=1;
 s=0;
 printf("enter value of n:");
 scanf("%d",&n);

 while(a<=n){

 if(a%2!=0){

 s=s+a;
}

 a++;
}

 printf("%d",s);

}
