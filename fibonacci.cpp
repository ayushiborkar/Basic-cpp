// while-loop
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main() {
	int a,b,c;
	a = 0;
	b = 1;
	c = 0;
	printf("%d\n%d",a,b);
	while(c<=10) { // fibonacci
		c = a+b;
		printf("\n%d",c);
		a = b;
		b = c;
	}
	getch();
}
