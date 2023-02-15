#include <stdio.h>
int main(){
    double a,b;
    char opt;
    printf("Enter the numbers seperated with space: ");
    scanf("%lf %lf",&a,&b);
    fflush(stdin);
    printf("Enter the operator from '+','-','*','/': ");
    scanf("%c",&opt);
    switch(opt){
        case '+': printf("the sum of %0.1lf and %0.1lf is %0.1lf",a,b,a+b);
        break;
        case '-': printf("the difference of %0.1lf and %0.1lf is %0.1lf",a,b,a-b);
        break;
        case '*': printf("the multiplication of %0.1lf and %0.1lf is %0.1lf",a,b,a*b);
        break;
        case '/': printf("the division of %0.1lf and %0.1lf is %0.1lf",a,b,a/b);
        break;
        default:
        printf("Error! operator is not correct");
    }
    return 0;
}
