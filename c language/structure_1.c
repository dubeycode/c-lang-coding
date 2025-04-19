#include<stdio.h>
struct stu{
    int sroll;
    char sname[20];
    int marks[5];
};
int main(){
struct stu s;
int total=0;
float avg;

printf("\n enter student roll number");
scanf("%d",&s.sroll);

printf("\n enter student name");
scanf("%s",s.sname);

printf("\n enter 5 subject marks");
for(int i=0;i<5;i++){
scanf("%d",&s.marks[i]);
total += s.marks[i];
}
avg=(float)total/5;

printf("sroll: %d \n",s.sroll);
printf("sname: %s \n",s.sname);
printf("student total marks %d \n",total);
printf("avg %f \n",avg);

return 0;
}
