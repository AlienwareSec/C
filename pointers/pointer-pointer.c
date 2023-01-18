#include <stdio.h>
int main(){
    int a=40;
    int *i=&a; //stores the addr. of i
    int **j=&i; //stores the addr. of pointer *i
    printf("%d",**j);
    return 0;
}