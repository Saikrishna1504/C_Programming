#include<stdio.h>
#include<math.h>
int main(){
int a[]={2,4,6,8};
int i,max,min,maxdiff;
int size=sizeof(a)/sizeof(a[0]);
max=a[0];
min=a[0];
for(i=1;i<size;i++)
{
if (max<a[i])
max=a[i];
if (min>a[i])
min=a[i];
}
printf("max number=%d",max);
printf("\nmin number is  %d",min);
maxdiff=max-min;
printf("\nmax diff=%d",maxdiff);
}
