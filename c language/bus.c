#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SEATS 30
#define MAX_NAME_LENGTH 50

struct Booking {
    char name[MAX_NAME_LENGTH];
    int SeatNo;
    char source[MAX_NAME_LENGTH];
    char destination[MAX_NAME_LENGTH];
};

struct Booking booking[MAX_SEATS];
int bookedseats = 0;

void bookseat() {
    if (bookedseats >= MAX_SEATS) {
        printf("No more seats available\n");
        return;
    }

    struct Booking newBooking;
    printf("Enter a name: ");
    scanf("%49s", newBooking.name); // Prevent buffer overflow
    printf("Enter seat number: ");
    scanf("%d", &newBooking.SeatNo);
    printf("Enter source: ");
    scanf("%49s", newBooking.source); // Prevent buffer overflow
    printf("Enter destination: ");
    scanf("%49s", newBooking.destination); // Prevent buffer overflow

    booking[bookedseats++] = newBooking;
    printf("Seat booking successful\n");
}

void viewReservation() {
    if (bookedseats == 0) {
        printf("No reservations yet\n");
        return;
    }

    printf("All reservations:\n");
    printf("Seat No.\tName\tSource\tDestination\n");
    for (int i = 0; i < bookedseats; i++) {
        printf("%d\t%s\t%s\t%s\n", booking[i].SeatNo, booking[i].name, booking[i].source, booking[i].destination);
    }
}

void editReservation() {
    int seatTOEdit;
    printf("Enter seat number to edit: ");
    scanf("%d", &seatTOEdit);

    int found = 0;
    for (int i = 0; i < bookedseats; ++i) {
        if (booking[i].SeatNo == seatTOEdit) {
            printf("Enter new name: ");
            scanf("%49s", booking[i].name); // Prevent buffer overflow
            printf("Enter new source: ");
            scanf("%49s", booking[i].source); // Prevent buffer overflow
            printf("Enter new destination: ");
            scanf("%49s", booking[i].destination); // Prevent buffer overflow
            printf("Reservation edited successfully\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Reservation not found\n");
    }
}

void printTicket() {
    int seatToprint;
    printf("Enter seat number to print ticket: ");
    scanf("%d", &seatToprint);

    int found = 0;
    for (int i = 0; i < bookedseats; ++i) {
        if (booking[i].SeatNo == seatToprint) {
            printf("Ticket for seat no %d\n", booking[i].SeatNo);
            printf("Passenger name: %s\n", booking[i].name);
            printf("Passenger source: %s\n", booking[i].source);
            printf("Passenger destination: %s\n", booking[i].destination);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Reservation not found\n");
    }
}

int main() {
    int choice;
    do {
        printf("Mini Bus Ticket Booking System\n");
        printf("1. Book a seat\n");
        printf("2. View reservations\n");
        printf("3. Edit a reservation\n");
        printf("4. Print a ticket\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bookseat();
                break;
            case 2:
                viewReservation();
                break;
            case 3:
                editReservation();
                break;
            case 4:
                printTicket();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option\n");
        }
    } while (choice != 5);

    return 0;
}