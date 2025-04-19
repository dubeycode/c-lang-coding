// assignment12 solution
/* pattern 1
#include<stdio.h>
int main(){
    int row,col;
    printf("Enter the number of row");
    scanf("%d",&row);
    printf("Enter number of col");
    scanf("%d",&col);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(j>=row+1-i && j<=row-1+i){
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }    
}       
*/
/*//pattern 2
#include<stdio.h>
int main(){
    int row,col;
    printf("Enter number of row "); 
    scanf("%d",&row);
    printf("Enter number of col");
    scanf("%d",&col);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(j>=i && j<=col+1-i){
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }    
}     
*/

// pattern 3    
/* 
#include<stdio.h>
int main(){
    int row,col,k;
    printf("Enter the number of row");
    scanf("%d",&row);
    printf("Enter number of col");
    scanf("%d",&col);
    for(int i=1;i<=row;i++){
        k=1;
        for(int j=1;j<=col;j++){
            if(j>=row+1-i && j<=row-1+i){
                if(k)
                printf("*");
                else
                printf(" ");
                k=1-k;
            }
            else
            printf(" ");
        }
        printf("\n");
    }    
}      
*/
/*//pattern 4
#include<stdio.h>
int main(){
    int row,col,k;
    printf("Enter the number of row");
    scanf("%d",&row);
    printf("Enter number of col");
    scanf("%d",&col); 
    for(int i=1;i<=row;i++){
        k=1;
        for(int j=1;j<=col;j++){
            if(j>=row+1-i && j<=row-1+i){
                printf("%d",k);
                j<=4?k++:k--;
            }
            else
            printf(" ");
        }
        printf("\n");
    }    
}  */

/*// pattern 5
#include<stdio.h>
int main(){
   int row,col;
   printf("Enter number row");
   scanf("%d",&row);
   printf("enter  number col");
   scanf("%d",&col);
   for(char i=1;i<=row;i++){
   char k='A';
    for(char j=1;j<=col;j++){
        if(j>=i && j<=col+1-i){
        printf("%c",k);
        k++;
        }
        else
        printf(" ");
    }
    printf("\n");
   }
return 0;
} */
 /* // pattern 6
#include<stdio.h>
int main(){
   int row,col;
   char k;
   printf("Enter number row");
   scanf("%d",&row);
   printf("enter  number col");
   scanf("%d",&col);
   for(int i=1;i<=row;i++){
    k='A';
    for(int j=1;j<=col;j++){
        if(j>=i && j<=col+1-i){
        printf("%c",k);
        j<=col/2?k++:k--;
        }
        else
        printf(" ");
    }
    printf("\n");
   }
return 0;
}   */  

