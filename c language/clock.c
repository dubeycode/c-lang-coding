#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include <conio.h>
#include<stdlib.h>
int main(){
    int hour,minute,second;
    hour=minute = second = 0;
    while(1){
        system("cls");
        
      printf("%2d : %2d : %2d",hour,minute,second);
     fflush(stdout);
     // update hour minute
     second ++;

     if(second == 60)
     {
       minute +=1;
       second =0;
     }
     if(minute == 60)
     {
     hour +=1;
     minute=0;
     }
     if(hour == 24){
        hour=0;
        minute=0;
        second=0;
     }
     sleep(1);
    }
    return 0;
}