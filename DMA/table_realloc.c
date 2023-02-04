#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    int table=5;
    ptr = (int*) calloc(5,sizeof(int));
    printf("enter the value for table = ");
    scanf("%d",&table);
    for(int i=1;i<=5;i++){
        ptr[i]=table*i;
        printf("%d x %d = %d\n",table,i,ptr[i]);
    }
    printf("\nAfter reallocating....\n\n");
    ptr = realloc(ptr, 10*sizeof(int));
    for(int i=1;i<=10;i++){
        ptr[i]=table*i;
        printf("%d x %d = %d\n",table,i,ptr[i]);
    }
    return 0;
}