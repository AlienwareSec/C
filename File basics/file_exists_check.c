#include <stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("pawan.txt","r");
    if(ptr==NULL){
        printf("This FILE does not exist.");
    }
    else{
        printf("file exists");
        fclose(ptr);
    }
    return 0;
}