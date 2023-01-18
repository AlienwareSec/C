// area of circle and then modified into area of cylinder
#include <stdio.h>
int main(){
    int radius,height;
    float pi=3.14;
    printf("radius of circle = ");
    scanf("%d",&radius);
    float area=radius*radius*pi;
    printf("area of circle is %f\n",area);
    printf("height of cylinder = ");
    scanf("%d",&height);
    float areac=radius*radius*height*pi;
    printf("area of cylinder %f",areac);
    return 0;
}