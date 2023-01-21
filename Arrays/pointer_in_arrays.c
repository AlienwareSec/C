#include <stdio.h>
int main(){
    int arr[10];
    int *ptr=&arr[0];
    //int *ptr=arr will also work the same.
    if(&arr[2]==ptr+2){
        printf("yes they both points to 3rd element");
    }
    else
    printf("no they both does'nt points to 3rd element");
    return 0;
} 