//sum of 2 numbers:
#include <stdio.h>
int main(){
   int a=237;
   int b=193;
   int c=237+193;
   printf("sum %d\n",a+b); //method1
   printf("sum %d",c); //method2
   //method3  (taking input from user)
   int d,e;
   scanf("%d",&d); //taking value of d
   scanf("%d",&e); //taking value of e
   printf("sum %d\n",d+e);
   return 0;
}
