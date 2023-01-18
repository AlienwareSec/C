#include <stdio.h>
int main(){
    int a=8;
    float b=10.2;
    char c='p';
    int*j=&a; //j stores add. of int a
    float*k=&b;  //k stores add of float b
    char*l=&c;  //l stores add of char c
    printf("add a = %u\n",&a);
    printf("add b = %u\n",&b);
    printf("add c = %u\n",&c);
    return 0;
}