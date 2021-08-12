// swap without third variable
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main() {
	int a,b;
	printf("enter value of a:");
	scanf("%d",&a);
	printf("enter value of b:");
	scanf("%d",&b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("a is:%d",a);
	printf("\nb is:%d",b);
	getch();
}
