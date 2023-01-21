#include <stdio.h>
void counter(int *arr,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if (arr[i]>0)
        count+=1;
        else
        count+=0;
    }
    printf("Count of positive integers = %d",count);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    counter(arr,n);
    return 0;
}