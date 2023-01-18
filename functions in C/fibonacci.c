//fibonacci by FUNCTION:
#include <stdio.h>
int fib(int n);
int main(){
    int n;
    printf("enter the number = ");
    scanf("%d",&n);
    printf("the fibonacci series = %d",fib(n));
    return 0;
}
int fib(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}