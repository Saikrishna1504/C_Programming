#include <stdio.h>
int main() {
    int n,i;
    printf("enter the values\n ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        printf("%d x %d=%d\n",n,i,n*i);
    }
}
   
