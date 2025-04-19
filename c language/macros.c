#include<stdio.h>
#define PI 3.145926
float area(float r){
	return PI*r*r*r;
}
int main(){
	printf("%f",area(10));
}
