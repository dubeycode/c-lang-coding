//#include<stdio.h>
//int main(){
//	///////////frist method////////////////
//	int arr[20]={1,2,3,4,5,6,7,};
//	printf("%d\n",arr[1]);
//	printf("%d\n",arr[0]);
//	arr[0]=99;
//	printf("%d",arr[0]);
//
///// second method ///
////int arr[5];
//arr[0]=11;
//arr[1]=22;
//arr[2]=44;
//arr[3]=88;
//arr[4]=176;
//printf("%d",arr[3]);
 ////////////////////third method///////////
//     int arr[5];
//     printf("entr the frist number");
//     scanf("%d",&arr[0]);
//     printf("entr the second number");
//     scanf("%d",&arr[1]);
//     printf("entr the third number");
//     scanf("%d",&arr[2]);
//     printf("entr the fourth number");
//     scanf("%d",&arr[3]);
//     ////prinit number using index number//
//     printf("%d",arr[2]);

//////////fourth method//////////
//int arr[5]={22,33,44,55,66};
//for(int i=0;i<=4;i++)
//printf("%10d",arr[i]);

//////////fifth method//////////////
//int arr[5];
//for(int i=0;i<=4;i++){
//		printf("enter ellement number %d\n",i+1);
//	scanf("%d",&arr[i]);
//}
////for(int i=0;i<=5;i++)
//for(int i=4;i>=0;i--){
//	printf("%5d",arr[i]);
//}

//sum of array//
//	int arr[5]={33,44,66,77,22};
//	int sum=0;
//	for(int i=1;i<=4;i++){
//	sum=sum+arr[i];
//	}
//	printf("%d",sum);
//}
//swap two number using array//
///array always work on call by refrance///
//#include<stdio.h>
//void main(){
//int fun(int x[])
//{
//	int temp = x[0];
//	x[0] = x[1];
//	x[1] = temp;
//	return;
//}
//int main(){
//	int arr[2] = {2,9};
//	printf("%d %d\n",arr[0],arr[1]);
//	fun(arr);
//	printf("%d %d\n",arr[0]arr[1]);
//	return 0;
//}	
////////////// searching  in array////
// #include<stdio.h>
// int main(){
// int arr[10]={1,2,3,34,45,66,99,88,77,56};
// int x = 34;
// for(int i=0;i<=9;i++){
// 	if(arr[i]==x){
// 		printf("%d is prsentr in array and its index is =  %d\n",x,i);
// 		break;
// 		}
// 	}
// 	return 0;
// }


#include<stdio.h>
int main(){
    int n;
    printf("Enter first number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}