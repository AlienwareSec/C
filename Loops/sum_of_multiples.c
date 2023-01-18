//sum of of multiples of 8:
#include <stdio.h>
int main(){
    int table=8,sum=0,i=1; //change table=8 to any number you want  
    do{
        sum+=table*i;
        i++;
    }while(i<=10);
    printf("sum of multiples of 8 %d",sum);
    return 0;
}