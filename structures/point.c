#include<stdio.h>
#include<math.h>
struct point{
    int x1,x2,y1,y2;
    float d;
}s;
void main()
{
    //printf("enter the x1 and x2 values");
    scanf("%d%d",&s.x1,&s.x2);
    //printf("enter the y1 and y2 values");
    scanf("%d%d",&s.y1,&s.y2);
    s.d=sqrt((s.x2-s.x1)*(s.x2-s.x1)+(s.y2-s.y1)*(s.y2-s.y1));
    printf("the distane d is %f",s.d);
    
}
