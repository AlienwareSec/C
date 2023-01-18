//AVERAGE OF 3 NO.
#include <stdio.h>
float average(float x,float y,float z);
int main(){
    float a=5,b=7,c=13;
    printf("The average of %d, %d, %d is = %f",a,b,c,average(a,b,c));  
    return 0;
}
float average(float x,float y,float z){
    float p=(x+y+z)/3;
    return p;
}