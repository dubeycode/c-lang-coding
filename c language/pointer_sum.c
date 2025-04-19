// #include<stdio.h>
//  int  sum(int *a,int *b){
//  	return *a+*b;
//  }
// int avg(int *a,int *b){
//       return (*a+*b)/2;
// }
// int main(){
// 	int a,b;
// 	printf("\n enter two number \n");
// 	scanf("%d%d",&a,&b);
// 	 int total_sum=sum(&a,&b);
// 	 printf("addition is :%d\n",total_sum);
// 	int avg_is=avg(&a,&b);
// 	 printf(" average is :%d\n",avg_is);
// }

////////////////////////// insert in array /////////////////////////////////
/*
#include <stdio.h>
int main(){
   int LA[3] = {}, i;
   printf("Array Before Insertion:\n");
   for(i = 0; i < 3; i++)
      printf("LA[%d] = %d \n", i, LA[i]);
   printf("Inserting Elements.. \n");
   printf("The array elements after insertion :\n"); // prints array values
   for(i = 0; i < 3; i++) {
      LA[i] = i + 2;
      printf("LA[%d] = %d \n", i, LA[i]);
   }
   return 0;
}  */

#include <stdio.h>
void main(){
   int LA[] = {1,3,5};
   int n = 3;
   int i;
   printf("The original array elements are :\n");
   for(i = 0; i<n; i++)
      printf("LA[%d] = %d \n", i, LA[i]);
   for(i = 1; i<n; i++) {
      LA[i] = LA[i+1];
      n = n - 1;
   }
   printf("The array elements after deletion :\n");
   for(i = 0; i<n; i++)
      printf("LA[%d] = %d \n", i, LA[i]);
}








