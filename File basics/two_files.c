#include <stdio.h>
int main(){
    FILE *ptr;
    FILE *fptr;
    ptr = fopen("read.txt","r");
    fptr = fopen("write.txt","w");
    char c;
    c = fgetc(ptr);
    while(c!=EOF){
        fputc(c,fptr);
        fputc(c,fptr);
        c=fgetc(ptr);
    }
    return 0;
}