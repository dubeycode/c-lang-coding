#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define MAX_SEATS 30
#define MAX_NAME_LENGTH 50

struct Booking{
    char name[MAX_NAME_LENGTH];
    int  SeatNo;
    char source[MAX_NAME_LENGTH];
    char destination[MAX_NAME_LENGTH];
};
struct Booking booking[MAX_SEATS];
int bookseats =0;
void bookedseats(){
     if (bookedseats >= MAX_SEATS){
      printf("NO more seat avilable");
      return;
     }    
     struct Booking newBooking;

     printf("Enter a name : ");
     scanf("%s",newBooking.name);
     printf("ENter seats number");
     scanf("%d",&newBooking.SeatNo);
     printf("Enter source :");
     scanf("%s",newBooking.source);
     printf("Enter distnsation");
     scanf("%s",newBooking.destination);
     
     booking[bookedseats++]=newBooking;
     printf("seats booking sucessfully");
     
}

void viewReservation(){
     if (bookedseats == 0){
          printf("NO reservation yet ");        
            return;
     }
     printf("All reservation ");
     printf("seat no .name source distnation");
     for(int i=0;i < bookedseats;i++){
          printf("%d %s %s %s",bookedseats[i].seatNo,booking[i].name,booking[i].source,booking[i].distnation);
     }
}

void editReservation(){
     int seatTOEdit;
     printf("Enter seat number to edit ");
     scanf("%d",&seatTOEdit);
     int found = 0;
     for(int i=0; i < bookedseats;++i){
         if(booking[i].SeatNo == seatTOEdit){
          printf("Enter new name ");
          scanf("%s",booking[i].name);
          printf("Enter new source :");
          scanf("%s",booking[i].source);
          printf("Enter new distnation");
          scanf("%s",booking[i].distnation);
          printf("");
          // add more filed to edit as needed
          pritnf("Reservation edited sucessfully");
          found =1;
          break;
         }
     }
     if(!found){
          printf("Reservation not found");
     }
}
void printTicket(){
     int seatToprint;
     printf("Enter seat number to print ticket :");
     scanf("%d",&seatToprint);

     int found = 0;
     for(int i=0;i < bookedseats;++i){
          if(booking[i].SeatNo == seatToprint){
               printf("Ticket for seat no %d",booking[i].SeatNo);
               printf("pasanger name : %s",booking[i].name);
               printf("pasanger source: %s",booking[i].source);
               printf("passanger distnation %s",booking[i].distnation);
               //add more field to to print as needed
               found = 1;
               break;
          }
     }
     if(!found){
          printf("Reservation not found");
     }
}

int main(){
   int choice;
   do{
    printf("Mini Bus Ticket Bookig System");
    printf("1.Book a seat");
    printf("2. view reservation");
    printf("3.Edit a reservation");
    printf("4. print a Ticket");
    printf("5.Exit");

      switch(choice){
        case 1:
            bookseat();
            break;
        case 2:
             view_reservation();
             break;
        case 3:
             edit_reservation();
             break;
        case 4:
              print_ticket();
              break;
        case 5:
             printf("Exting.....\n");
             break;
        default:
              printf("Invalid choice . please enter a vaid option");
      }
   } while(choice !=5);
return 0;
}