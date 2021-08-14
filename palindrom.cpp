// while-loop
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main() {
	int a,b,c;
	b = 0;
	printf("enter any number:"); // enter 121
	scanf("%d",&a);
	c = a;
	while(a>0) {
		b = b*10+a%10;
		a = a/10;
	}
	if(b==c) {
		printf("%d is a palindrom number",b);
	}
	else {
		printf("%d is not a palindrom number because result is: %d",c,b);
	}
	getch();
}
