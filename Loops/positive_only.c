#include <stdio.h>
int main(){
    int num;
    printf("enter the number = ");
    scanf("%d",&num);
    if(num<=0){
        goto end;
    }
    printf("number is : %d",num);
    end:
    printf("\nBye Bye!!!");
    return 0;
}