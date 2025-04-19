#include<stdio.h>
struct empoloyee
{
    int id;
    char name[50];
    float salary;
};

// function to display the details
void show(struct employee e){
    printf("Employee Details: \n");
    printf("Id %d \n",e.id);
    printf("name %s \n",e.name);
    printf("salary %.2f \n",e.salary);

}
int main(){
    struct employee emp1={101,"DUbey",75000};

    // call the function 
    show(emp1)
}
