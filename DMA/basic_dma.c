/* malloc()
   calloc()
   free()
   realloc() */
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr, *ptr2;
    ptr = (int*) malloc(5 * sizeof(int));
    ptr2 = (int*) calloc(5,sizeof(int));
    free(ptr);
    ptr2 = realloc(ptr,10*sizeof(int));
    return 0;
}