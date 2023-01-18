//sum of 1st n natural no. by FUNCTION :
#include <stdio.h>
int sum(int n);
int main(){
    int n;
    printf("enter the value of n = ");
    scanf("%d",&n);
    printf("sum of n natural no. is = %d",sum(n));    
    return 0;
}
int sum(int n){
    if (n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    else{
        return sum(n-1)+n;
    }
}