#include <stdio.h>
struct employee{
    int code;
    char name[20];
    float salary;
};
void show(struct employee e){
    printf("CODE  NAME  SALARY");
    printf("%d  %s  %0.2f",e.code,e.name,e.salary);
}
int main(){
    struct employee pawan;
    struct employee *ptr;
    ptr=&pawan;
    ptr->code=101;
    strcpy(ptr->name,"pawan");
    ptr->salary=654.56;
    show(pawan);
    // void show(struct employee rishi); 
    return 0;
}