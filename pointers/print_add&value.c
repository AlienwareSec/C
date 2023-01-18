#include <stdio.h>
int main(){
    int a=20;
    int *i=&a; //pointer
    printf("address of a = %u\n",i);
    printf("value of a = %d",*i);
}