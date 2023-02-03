#include <stdio.h>
typedef struct complex_number{
    int real;
    int img;
}complex;
void display(complex c){
    printf("the value of real part is %d\n",c.real);
    printf("the value of imaginary part is %d\n",c.img);
}
int main(){
    complex cnums[5];
    for(int i=1;i<=5;i++){
        printf("enter the value of complex %d = ",i);
        scanf("%d",&cnums[i].real);
    }
    for(int i=1;i<=5;i++){
        printf("enter the imaginary of complex %d = ",i);
        scanf("%d",&cnums[i].img);
    }
    for(int i=1;i<=5;i++){
        display(cnums[i]);
    }
    return 0;
}