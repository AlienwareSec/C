// TABLE BY FOR LOOP:
#include <stdio.h>
int main(){
    int a=1,i;
    printf("enter the number for its table = ");
    scanf("%d",&i);
    do{
        printf("%d * %d = %d\n",i,a,i*a);
        a++;
    }while(a<=10);
    return 0;
}