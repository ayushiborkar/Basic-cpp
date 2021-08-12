// if-statement
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main() {
	int a,b;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	if(a%7 == 0 & b%7 == 0) {
		printf("both numbers are divisible by 7");
	}
	if(a%7 != 0 & b%7 != 0) {
		printf("both numbers are not divisible by 7");
	}
	if(a%7 == 0 & b%7 != 0) {
		printf("%d is divisible and %d is not divisible by 7",a,b);
	}
	if(a%7 != 0 & b%7 == 0) {
		printf("%d is not divisible and %d is divisible by 7",a,b);
	}
	getch();
}
