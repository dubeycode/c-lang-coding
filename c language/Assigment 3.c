		/* wap to claclute sideof character */
//#include<stdio.h>
//int main(){
//	char a;
//	printf("your char size is : %d",sizeof(a));
//}
	 /* calclute the size of real constant */
//#include<stdio.h>
//int main(){
//	float a;
//	printf("your real constant : %d",sizeof(a));
//}
		/*A convert B using increment operator */
//#include<stdio.h>
//int main(){
//	char a;
//	printf("Enter your character ");
//	scanf("%c",&a);
//	printf("%c",a);
//	a++;
//	printf("after update the value %c",a);
//}
   		/* wap to print unit digits of a given number */
//#include<stdio.h>
//int main(){
//	int n,unit;
//	printf("enter your number: ");
//	scanf("%d",&n);
//	unit =n%10;
//	printf("unit number in digits : %d",unit);
//}

		/* wap to given number print without last number */
//#include<stdio.h>
//int main(){
//	int a,cal;
//	printf("enter your number : ");
//	scanf("%d",&a);
//	cal=a/10;
//	printf("the output is : %d ",cal);
//}

		/*wap to swithout third  variable */
//#include<stdio.h>
//int main(){
//	int a,b,swap;
//	printf("enter your values ");
//	scanf("%d%d",&a,&b);
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	printf("after swaping : %d \n %d",a,b);
//}

		/* wap to swap two number */
//#include<stdio.h>
//int main(){
//	int a,b,temp;
//	printf("enter your values for swap :");
//	scanf("%d%d",&a,&b);
//	temp=a;
//	a=b;
//	b=temp;
//	printf("after swap 1st is %d and 2nd is %d ",a,b);
//}

			/*wap to swap without using + - operator */
//#include<stdio.h>
//int main(){
//	int a,b;
//	printf("enter your valuer to swap");
//	scanf("%d%d",&a,&b);
//	a=a*b;
//	b=a/b;
//	a=a/b;
//	printf("after swap value is1st %d 2nd %d",a,b);
//}

		/*wap to swap without using arthmatic operator */
//#include<stdio.h>
//int main(){
//	int a,b;
//	printf("enter 1st no :");
//	scanf("%d",&a);
//	printf("enter 2st no :");
//	scanf("%d",&b);
//	a=a^b;
//	b=a^b;
//	a=a^b;
//	printf("after swap 1st no is %d\n",a);
//	printf("after swap 2st no is %d",b);	
//}
		/* swap in one line */
#include<stdio.h>
int main(){
	int a,b;
	printf("enter your number ");
	scanf("%d%d",&a,&b);
	a=a+b-(b=a);
	printf("after swaping %d %d",a,b);
}

