#include<stdio.h>
void add();
void isEven();

int main(){
	add();
	isEven();
	 return 0;
}
 void add(){
 int a,b,sum;
 printf("no\n");
 scanf("%d%d",&a,&b);
 sum=a+b;
 printf("sum is %d ",sum);	
}
 void isEven(){
	int a;
	printf("no\n");
	scanf("%d",&a);
	if(a%2==0)
	 printf("even");
	else
	   printf("odd");
}

