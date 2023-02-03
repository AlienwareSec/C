#include <stdio.h>
typedef struct vector{
    int x;
    int y;
}vec;
vec sumvector(vec v1,vec v2){
    vec sum;
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    return sum;
}
int main(){
    vec v1,v2,result;
    v1.x=45, v1.y=34;
    v2.x=61, v2.y=66;
    result = sumvector(v1,v2);
    printf("sum vector of x din is %d and y din is %d",result.x,result.y);
    return 0;
}