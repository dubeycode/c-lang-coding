// insert in array

// #include<stdio.h>
// int main(){
//     int arr[5]={};
//     printf("Array of list");
//     for(int i=0;i< 5;i++){
//         printf("arr[%d]=%d\n",i,arr[i]);
//     }
//     printf("insert the value................\n");
//     printf("The array element after insertion\n");
//     for(int i=0;i< 5;i++){
//         arr[i]=i+2;
//         printf("arr[%d]=%d\n",i,arr[i]);
//     }
    

// }



// delet from the arrya 


// #include<stdio.h>
// int main(){
//     int arr[]={54,40,86,45,12};
//     int n=5;
//     int pos=1;
//     printf("orignal value of array\n");
//     for(int i=0;i<n;i++){
//         printf("arr[%d]=%d\n",i,arr[i]);
//     }
//     for(int i=1;i<n-1;i++){
//         arr[i]=arr[i+1];
        
//     }
//     n--;
//     printf("The array element after delection:\n");
//     for(int i=0;i<n;i++){
//         printf("arr[%d]=%d\n",i,arr[i]);
//     }
// }





///////searching


// #include<stdio.h>
// int main(){
//     int arr[]={45,5,6,74};
//     int item=5;
//     int n=sizeof(arr)/4;
//     // printf("org value \n");
//     // for(int i=0;i<n;i++){
//     //     printf("arr[%d]=%d \n",i,arr[i]);
//     // }
//     for(int i=0;i<n;i++){
//         if(arr[i]==item){
       
//     printf("found element %d at position %d",item,i+1);
//         }
       
//     }
// }



////// trivers
// #include <stdio.h>
// int main(){
//    int LA[] = {1,3,5,7,8};
// //    int item = 10, k = 3, n = 5;
//    int i=0,n=5;
//    printf("The original array elements are :\n");
//    for(i = 0; i<n; i++) {
//       printf("LA[%d] = %d \n", i, LA[i]);
//    }
// }



/////////// update
/*
#include <stdio.h>
void main(){
   int LA[] = {1,3,5,7,8};
   int k = 3, n = 5, item = 10;

//    printf("The original array elements are :\n");
//    for(int i = 0; i<n; i++) {
//       printf("LA[%d] = %d \n", i, LA[i]);
//    }
   LA[k-2] = item;
   printf("The array elements after updation :\n");
   for(int i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
}
*/







// #include<stdio.h>
// int main(){
//     int n;

//     printf("no of arr");
//     scanf("%d",&n);

//     int arr[n];
//     printf("element of array:");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int item=5;
//     printf("enter number which you wnat to find :");
//     scanf("%d",&item);
//     int found=0;
//     for(int i=0;i<=n;i++){
//         if(arr[i]==item){
//             printf("found elemrnt %d at position %d\n",item,i+1);
//             found=1;
//             break;
//         }
//          else{
//         printf("not found");
//         break;
//     }
//     }
   
// }



/////////////////////////////link list
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node {
   int data;
   struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;

// display the list
void printList(){
   struct node *p = head;
   printf("\n[");
   
   //start from the beginning
   while(p != NULL) {
      printf(" %d ",p->data);
      p = p->next;
   }
   printf("]");
}

//insertion at the beginning
void insertatbegin(int data){
   
   //create a link
   struct node *lk = (struct node*) malloc(sizeof(struct node));
   lk->data = data;
   
   // point it to old first node
   lk->next = head;
   
   //point first to new first node
   head = lk;
}
void main(){
   int k=0;
   insertatbegin(12);
   insertatbegin(22);
   insertatbegin(30);
   insertatbegin(36);
   insertatbegin(50);
   printf("Linked List: ");
   
   // print list
   printList();
}