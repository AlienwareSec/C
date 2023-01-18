//TABLE BY DO WHILE LOOP:
#include <stdio.h>
int main(){
    int i;
    printf("enter the number for its table = ");
    scanf("%d",&i);
    for(int a=1;a<=10;a++){
         printf("%d * %d = %d\n",i,a,i*a);
    }
    return 0;
}