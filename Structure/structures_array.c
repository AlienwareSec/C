#include <stdio.h>
struct pawan{
    int code;
    char name[20];
    float salary;
};
int main(){
    struct pawan e1={100,"Pawan",652.56};
    printf("Code is: %d\n",e1.code);
    printf("Name is: %s\n",e1.name);
    printf("Salary is: %f\n",e1.salary);     
    return 0;
}