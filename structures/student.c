#include<stdio.h>
struct student{
char name[50];
int id,m1,m2,m3,total;
float avg;
}s;
void main(){
//printf("enter the student name");
scanf("%s",s.name);
//printf("enter the id");
scanf("%d",&s.id);
//printf("enter the marks");
scanf("%d%d%d",&s.m1,&s.m2,&s.m3);
s.total=s.m1+s.m2+s.m3;
s.avg=s.total/3;
printf("the name of student is %s \n",s.name);
printf("the id number of student is %d \n",s.id);
printf("the marks of student is %d %d %d \n",s.m1,s.m2,s.m3);
printf("the total marks of student is %d \n",s.total);
printf("the averag marks of student is %f \n",s.avg);
}


