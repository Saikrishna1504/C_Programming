#include <stdio.h>
int main() {
    int n,i,result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &n);
    while("n=0"){
        i=n%10;
        result=i*i*i;
        n=n/10;
    }
      if (result == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);
        return 0;
 }
    

