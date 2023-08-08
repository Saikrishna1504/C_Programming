#include<stdio.h>
long sum(int);
int main(){
    int b,result;
    //printf("enter the value");
    scanf("%d",&b);
    result=sum(b);
    printf("sum of digits is %d",result);
}
long sum(int b){
    if (b!=0)
    return(b%10+sum(b/10));
    else 
    return 0;
}
