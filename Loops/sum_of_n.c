//sum of 1st n natural numbers(while):
#include <stdio.h>
int main(){
    int i=0,sum=0,n;
    scanf("%d",&n);  
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("sum of numbers is = %d",sum);
    return 0;
}