#include<stdio.h>
#include<stdlib.h>
int get_1st_weekday(int year){
   int day = ((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year - 1) / 400);
   return day%7;
}
int main(){
    system("color 3f");
    int year,month,day,days_in_months,weekDay = 0,startingDay;
    printf("\n enter your desired year:");
    scanf("%d",&year);

    char *months[]={"january","february","March","April","May","June","July","August","September","October","November","December"};
    int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};
    // lea year cheek
    if(year%4==0 && year%100!=0 || year%400==0)
     monthDay[1]=29;

    startingDay = get_1st_weekday(year);
    for(month=0;month<12;month++){
        days_in_months = monthDay[month];
        printf("\n\n----------%s----------",months[month]);
        printf("\n sun  Mon  Tue  Wed  Thrus  Fri  sat\n");
        // print leading space for the frist day of the month 
        for(weekDay = 0;weekDay<startingDay;weekDay++)
        printf("     ");
    // print the days of the month
      for(day=1;day<=days_in_months;day++){
        printf("%5d",day);
        
      if(++weekDay>6){
        printf("\n");
        weekDay=0;
      }
      }
      startingDay=weekDay;
    }
    return 0;
}