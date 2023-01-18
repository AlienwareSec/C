//factorial of a given number:
#include <stdio.h>
int main(){
    int fact=1,a;
    printf("write num for factorial ");
    scanf("%d",&a);
    for(int i=a;i>0;i--){
        fact*=i;
    }
    printf("fact is %d",fact);
    return 0;
}