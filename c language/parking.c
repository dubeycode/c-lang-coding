#include<stdio.h>
#include<stdlib.h>
int Menu();
void Bus();
void cycle();
void Rikasha();
void Delete();
void showdata();
int nor=0,nob=0,noc=0,amount=0,count=0;
int main()
{
    while(1){
switch(Menu()){
    case 1:
          Bus();
          break;
    case 2:
        cycle();
        break;
    case 3:
         Rikasha();
         break;
    case 4:
         showdata();
         break;
    case 5:
        Delete();
        break;
    case 6:
       exit(0);
    default :
          printf("\n inivalid choice");
    } 
}

}
int Menu(){
    int ch;
    printf("1 enter  bus\n ");
    printf("2 enter cycle\n ");
    printf("3 enter Riksha \n");
    printf("4 show status\n ");
    printf("5 delete data \n");
    printf("6 exit");
    printf("\n\n Enter your choice");
    scanf("%d",&ch);
    return(ch);
}
void Delete(){
    nob=0;
    noc=0;
    nor=0;
    amount=0;
    count=0;
}
void showdata(){
    printf("number of bus %d\n",nob);
    printf("number of cycle %d\n",noc);
    printf("number of riksha %d\n",nor);
    printf(" Total number of vichales %d\n",count);
    printf("Total amount gain %d\n",amount);
}
void Rikasha(){
    printf(" entery sucessful");
 nor++;
 amount=amount+50;
 count++;
}
void cycle(){
    printf(" entery sucessful");
noc++;
amount=amount+20;
count++;
}
void Bus(){
    printf(" entery sucessful");
nob++;
amount=amount+100;
count++;
}