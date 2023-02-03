#include <stdio.h>
int main(){
    FILE *ptr;
    int num,num2,num3;
    //ptr = fopen("samplefile.txt","w"); // used to write in a file (if not present it would create it).
    ptr= fopen("samplefile.txt","r");    // used to read in a file.
    fscanf(ptr,"%d %d %d",&num,&num2,&num3);
    fclose(ptr);  // it's a good practice to close a file after work is done.
    printf("values of numbers are = %d,%d,%d",num,num2,num3);
    return 0;
}