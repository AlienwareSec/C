#include <stdio.h>
int main(){
    int *ptr;
    ptr = (int*) malloc(10*sizeof(int));
    for(int i=1;i<=6;i++){
        scanf("%f",&ptr[i]);
    }
    for(int i=1;i<=6;i++){
        printf("%d = %0.2f\n",i,ptr[i]);
    }
    
    return 0;
}