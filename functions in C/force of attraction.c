//Force of attraction by FUNCTION
#include <stdio.h>
float force(int m);
int main(){
    int m;
    printf("enter the mass of body = ");
    scanf("%d",&m);
    printf("force of attraction on the body = %0.2f",force(m));
    return 0;
}
float force(int m){
    float f=m*9.8;
    return f;
}