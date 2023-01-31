#include <stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter 10 numbers: ");
    for(int i=1;i<=10;i++){
        scanf("%d",&n);
        sum+=n;
    }
        printf("sum = %d",sum);
    return 0;
}