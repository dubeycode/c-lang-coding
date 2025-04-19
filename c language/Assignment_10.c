	/* fibonacci serise */
// #include<stdio.h>
// void genrate_fibonacci(int n){
// 	int frist=0,second=1,next;
// 	printf("fibonaacci serise :")
// 	for(int i=0;i<=n;i++){
// 		if(i<=1){
// 			next=i;
// 		}else{
// 			next=frist+second;
// 			frist=second;
// 			second=next;
// 		}
// 		printf("%d",next);
// 	}
// 	printf("\n");
// }
// int main(){
// 	int terms;
// 	printf("enter the number of turms");
// 	scanf("%d",&terms);
// 	if(terms<=0){
// 		printf("please enter positive number");
// 	}else{
// 		genrate_fibonacci(terms);
// 	}
// 	return 0;
// }

		
		/* n number of fibnochi serise */
// #include<stdio.h>
// int main(){
// 	int n=10,a=0,b=1,c,i;
// 	for(i=1;i<=n;i++){
// 		printf("%5d",a);
// 		c=a+b;
// 		a=b;
// 		b=c;
// 	}
// 	return 0;
// }

        /* cheek given number is fibnochi serise or not */
//#include<stdio.h>
//int main(){
//	int n,i;
//	printf("enter the number of terms");
//	scanf("%d",&n);
//	int series[n];
//	printf("enter the series");
//	for(i=0;i<=n;i++){
//		scanf("%d",&series[i]);
//	}
//	if(n<3){
//		printf("fibonacci series required at least 3 terms\n");
//	}
//	else{
//		int is_fib =1;
//		for(i=2;i<n;i++){
//			if(series[i]!=series[i-1]+series[i-2]){
//				is_fib=0;
//				break;
//			}
//		}
//		if(is_fib){
//			printf("the series is fibonacci");
//		}
//		else{
//			printf("the series is not fibonacci series");
//		}
//	}
//	return 0;
//}

		/* wap to calcluate HCF  of two numbers   */
// #include<stdio.h>
// int main(){
//    int num1,num2,temp;
//    printf("Enter frist number ");
//    scanf("%d",&num1);
//    printf("Enter second number");
//    scanf("%d",&num2);
//    while (num2!=0)
//    {
// 	temp=num2;
// 	num2=num1%num2;
// 	num1=temp;
//    }
//    printf("HCF is %d",num1);
// return 0;
// }

		/* wap to cheek given number is co-prime or not */
// #include<stdio.h>
// int prime(int num1,int num2){
// 	while (num2!=0)
// 	{
// 	 int temp=num1;
// 	 num2=num1%num2;
// 	 num1=temp;
// 	}
// 	return num1;
// }
// int main(){
//  int num1,num2;
//  printf("Enter two number");
//  scanf("%d",&num1);
//  printf("Enter two number ");
//  scanf("%d",&num2);
//   int result=prime(num1,num2);
//   if(result==1){
// 	printf("%d and %d are co_prime number\n",num1,num2);
//   }
//   else{
// 	printf("%d and %d is not a co_prime number\n",num1,num2);
//   }
// return 0;
// } 	
  /* prime number under 1 to 100*/
// #include<stdio.h>
// int main(){
//    int x,i;
//    printf("Enter your number");
//    scanf("%d",&x);
//    for( i=2;i<=x-1;i++){
//        if(x%i==0){
// 	   break;
// 	   }
//    }
// 	if(i==x)
// 	    printf("%d is a prime number",x);
// 	else
// 	   printf("%d is not a prime number",x);
// return 0;
// }

/* find the armstrong */
// #include<stdio.h>
// int main(){
//    int  n,r,s,x;
//    printf("Armstronog number are\n");
//    for(n=1;n<=10000;n++){
// 	s=0;
// 	x=n;
// 	while (x!=0)
// 	{
// 	 r=x%10;
// 	 s=s+r*r*r;
// 	 x=x/10;
// 	}
// 	if(s==n)
// 	       printf("%d\n",n);
//    }
// return 0;
// }
/* find armstrong number for a number*/
// #include<stdio.h>
// int main(){
//    int number,r,x,s;
//    printf("Enter your number");
//    scanf("%d",&number);
// 	s=0;
// 	x=number;
// 	while (x!=0)
// 	{
// 		r=x%10;
// 		s=s+r*r*r;
// 		x=x/10;
// 	}
// 	if(s==number)
// 	   printf("%d is armstrong number \n",number);
   
//    else{
// 		printf("%d is not a armstrong number",number);
// 	}
// return 0;
// }