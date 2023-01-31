//sum of 1st n natural numbers(while):
//To use the while loop uncomment the 7th & 9th line and comment the 6th line.
#include <stdio.h>
int main(){
    int i=0,sum=0,n;
    scanf("%d",&n);  
    for(i=0;i<=n;i++){
    //while(i<=n){
        sum=sum+i;
        // i++;
    }
    printf("sum of numbers is = %d",sum);
    return 0;
}
