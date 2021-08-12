// nested-if
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main() {
	int a,b,c;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	printf("enter third number:");
	scanf("%d",&c);
	if(a>b) {
		if(a>c) 
		printf("%d is greater number",a);
	}
	else {
		if(b>c)
		printf("%d is greater number",b);
		else 
		printf("%d is greater number",c);
	}
	getch();
}
