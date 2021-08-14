// while-loop
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main() {
	int a,b,s=0;
	printf("enter any number:");
	scanf("%d",&a);
	printf("reverse is:"); // reverse
	while(a>0) {
		b = a%10;
		a = a/10;
		s = s+b;
		printf("%d",b); //reverse
	}
	printf("\nsum of digits is:%d",s);
	getch();
}
