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
	if(a>b) {
		printf("%d is greater number",a);
	}
	if(a<b) {
		printf("%d is greater number",b);
	}
	getch();
}
