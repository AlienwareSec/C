#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    ptr = (int*) calloc(5,sizeof(int));
    for(int i=1;i<=5;i++){
        printf("Value of %d term = %d\n",i,ptr[i]);
    }
    ptr = realloc(ptr,10*sizeof(int));
    for(int i=1;i<=10;i++){
        printf("Enter the value of %d term = ",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=1;i<=10;i++){
        printf("Value of %d term = %d\n",i,ptr[i]);
    }
    return 0;
}