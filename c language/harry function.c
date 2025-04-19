#include<stdio.h>
int avg (int a,int b,int c){
  int avrage= a+b+c/3;
   	return avrage;
}
int main(){
	int a,b,c;
	printf("\n enter 3no  ");
	scanf("%d%d%d",&a,&b,&c);
	avg(a,b,c);
//	printf("the avg of three no is:%d ",avrage);
	
}
