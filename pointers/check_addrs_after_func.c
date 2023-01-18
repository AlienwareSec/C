#include <stdio.h>
void nofunc(int a);
int main(){
    int i=4;
    printf("addr. of a before func = %u\n",&i);
    nofunc(i);
    return 0;
}
void nofunc(int a){
    printf("addr. of a after func = %u",&a);
}   
// addresses won't be same for both as function takes the copy of the orignal variable.
