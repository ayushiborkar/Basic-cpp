// swap with third variable
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main() {
	int a,b,c;
	printf("enter value of a:");
	scanf("%d",&a);
	printf("enter value of b:");
	scanf("%d",&b);
	c = a;
	a = b;
	b = c;
	printf("a is:%d",a);
	printf("\nb is:%d",b);
	getch();
}
