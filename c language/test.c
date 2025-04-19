#include<stdio.h>
struct student
{
    int s_roll;
    char s_name[20];
    int s_marks[5];
};
int main(){
   struct student s1;
   int total=0;
   float avg;
 
 printf("\n enter student roll number ");
 scanf("%d",&s1.s_roll);

printf("\nenter student name");
scanf("%s",s1.s_name);

printf("\n enter 5 subject marks");
for(int i=0;i<5;i++){
    scanf("%d",&s1.s_marks[i]);
    // total +=s1.s_marks[i];
    total += s1.s_marks[i];

}

 avg=(float)total/5;

 printf("student roll number %d \n",s1.s_roll);
 printf("student name %s \n",s1.s_name);
 printf("avg %f \n",avg);





return 0;
}