#include <stdio.h>
int main(){
    FILE *ptr;
    FILE *mptr;
    ptr = fopen("read.txt","r");
    mptr = fopen("write.txt","w");
    int a;
    fscanf(ptr,"%d",&a);
    fprintf(mptr,"%d",a*2);
    return 0;
}