#include <stdio.h>
// struct employee{
//     char name[30];
//     int salary;
// };
int main(){
    char name[30];
    int salary;
    scanf("%s",&name);
    scanf("%d",&salary);
    // struct employee e1={"pawan",4505555};
    // struct employee e2={"satish",446432150};
    FILE *ptr;
    ptr = fopen("employee.txt","w");
    fprintf(ptr,"NAME   SALARY\n");
    fprintf(ptr,"%s  %d\n",name,salary);
    // fprintf(ptr,"%s  %d\n",e2.name,e2.salary);
    fclose(ptr);
    return 0;
}