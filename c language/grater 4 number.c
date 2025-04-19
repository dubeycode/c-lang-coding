#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("enter 4 number : ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b && a>c && a>d){
    	printf(" a is graater ");
		}
    else if( b>a && b>c && b>d){
    	printf("b is grater ");
	}
	else if( c>a && c>b && c>d){
    	printf("c is grater ");
	}
	else if( d>b && d>c && d>a){
    	printf("d is grater");
	}  
}
