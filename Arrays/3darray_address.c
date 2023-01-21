#include <stdio.h>
int main(){
    int _3darr[4][3][2];
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<2;k++){
                int *ptr=&_3darr[i][j][k];
                printf("The address of [%d][%d][%d] is %d\n",i,j,k,ptr);
            }
        }
    }
    return 0;
}
