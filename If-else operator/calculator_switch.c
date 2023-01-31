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
        case '+': printf("the sum of %lf and %lf is %lf",a,b,a+b);
        break;
        case '-': printf("the difference of %lf and %lf is %lf",a,b,a-b);
        break;
        case '*': printf("the multiplication of %lf and %lf is %lf",a,b,a*b);
        break;
        case '/': printf("the division of %lf and %lf is %lf",a,b,a/b);
        break;
        default:
        printf("Error! operator is not correct");
    }
    return 0;
}
