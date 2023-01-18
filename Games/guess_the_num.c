#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int g,n_attempt=0;
    int num;
    srand(time(0));
    num=rand()%100+1; //change 100 to 10 if you want to guess no. btw
    do{
        printf("guess the number: ");
        scanf("%d",&g);
        n_attempt++;
        if(g>num){
            printf("Lower number please\n");
            continue; 
        }
        else if(g<num){
            printf("Higher number please\n");
            continue;
        }
        else{
            printf("congrats you guessed it right\n");
            printf("number of attempts taken = %d\n",n_attempt);
        }
        }while(g!=num);
    return 0;
}