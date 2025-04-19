// left hand triangle  pattern 1
/*
#include<stdio.h>
int main(){
   int n;
   printf("enter your number");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        if(j<=i)
        printf("*")
      else
      printf(" ");
    }
    printf("\n");
   }
return 0;
}
*/
// right hand triangle  pattern 2
/*
#include<stdio.h>
int main(){
    int n;
   printf("enter your number ");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
     if (j>=6-i)
     printf("*");
     else
     printf(" ");
    }
    printf("\n");
   }
return 0;
}
*/
// left hand triangle decresing oder   pattern 3
/*
#include<stdio.h>
int main(){
    int n;
   printf("enter your number ");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j<=6-i)
        printf("*");
    else
        printf(" ");
    }
    printf("\n");
   }
return 0;
}
*/
// right hand triangle decresig mode   pattern 4
/*
#include<stdio.h>
int main(){
    int n;
   printf("Enter your num");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
    if(j>=i)
    printf("*");
    else
    printf(" ");
   }
   printf("\n");
   }
return 0;
}
*/
/*
pattern 5
1
12
123
1234
12345
*/
/*
#include<stdio.h>
int main(){
   int n;
   printf("Enter your number");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j<=i)
        printf("%d",j);
        else
        printf(" ");
    }
    printf("\n");
   }
return 0;
}
*/
/*
// pattern 6
1
21
321
4321
*/
/*
#include<stdio.h>
int main(){
   int n=4,k;
   for(int i=1;i<=n;i++){
    k=i;
    for(int j=1;j<=n;j++){
      if(j<=i){
        printf("%d",k);
        k--;
      }
      else
      printf(" ");
    }
    printf("\n");
   }
return 0;
}
*/
/*
// pattern 7
#include<stdio.h>
int main(){
  char ch='E';
   for(int i=65;i<=ch;i++){
    char k='A';
    for(char j='A';j<=ch;j++ ){
      if(j>=i){
      printf("%c",k);
      k++;
      }
      else
         printf(" ");
    }
    printf("\n");
   }
return 0;
}
*/
/*
// pattern 8
#include<stdio.h>
int main(){
   int n,k=1;
   printf("ENter your number ");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(j<=i){
      printf("%d",k);
      k++;
      }

      else
      printf(" ");
    }
    printf("\n");
   }
return 0;
} 
*/
// pattern 9
/*
#include<stdio.h>
int main(){
  char ch='E';
   for(int i=65;i<=ch;i++){
    for(char j='A';j<=ch;j++ ){
      if(j>=i)
      printf("%c",j);
      else
         printf(" ");
    }
    printf("\n");
   }
return 0;
} 
*/
/*
// pattern 10
#include<stdio.h>
int main(){
   int n;
   printf("Enter your number ");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i==1 || i==n || j==1 || j==n)
      printf("*");
      else
      printf(" ");
    }
    printf("\n");
   }
return 0;
} 
*/