#include<stdio.h>
void f1()
{
	int A[3][3],B[3][3],C[3][3],i,j;
	printf("\n enter 9 numebr of frist matrics");
	for(i=0;i<3;i++)
	   for(j=0;j<3;j++)
	    scanf("%d",&A[i][j]);
printf("\n enter 9 numebr of second  matrics");
	for(i=0;i<3;i++)
	   for(j=0;j<3;j++)
	    scanf("%d",&B[i][j]);
	    // additon of matrics
	    for(i=0;i<3;i++)
	   for(j=0;j<3;j++)
	C[i][j]=A[i][j] + B[i][j];   
	printf("sum of  matrics is \n");
	for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	    printf("%d",C[i][j]);
	    printf("\n");
	}   
	}
int main(){
	f1();
	printf("\n");
	return 0;
}
