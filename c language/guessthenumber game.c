#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int randomNumber =rand()%100+1;
    int guess;
    int attemps=0;
    do{
        printf("guess a number between 1 to 100\n");
        scanf("%d",&guess);
        attemps++;
    if(guess>randomNumber){
      printf("guess lower number \n");
    }
    else if(randomNumber<guess){
        printf("guess a higher number\n");
    }
    }while (guess!=randomNumber);
    {
        /* code */
        printf("you win the game\n you guessed it in %d attemps\n",attemps);
    }
    
}
