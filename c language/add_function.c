#include<stdio.h>
void sum();
void sub();
int main(){
	sum();
	sub();
	sum();
	sub();
	return 0;
}
void sum(){
	int a,b,c;
	printf("enter 2 number");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("sum of given two number is %d \n",c);
}
void sub(){
	int a,b,sub;
	printf("enter 1 number");
    scanf("%d",&a);
	printf("enter 2 number");
	scanf("%d",&b);
	sub=a-b;
	printf("subtraction of given nnumber is %d\n",sub);
}