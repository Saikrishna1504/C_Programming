#include <stdio.h>
#include <math.h>
int main() {
   int base,exp,result;
   printf("enter the base value");
   scanf("%d",&base);
   printf("enter the exp value");
   scanf("%d",&exp);
  result=pow(base,exp);
  printf("result=%d",result);
}
