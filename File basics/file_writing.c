#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("writing.txt","w");  //file is not present so it'll create one.
    fprintf(fptr,"Hey this is written through the file_writing code %d",10); //the file will be created with this data.
    fclose(fptr);
    return 0;
}