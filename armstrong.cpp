// while-loop
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main() {
	int a,b,c,s=0;
	printf("enter any number:"); // enter 153
	scanf("%d",&a);
	c = a;
	while(a>0) {
		b = a%10;
		a = a/10;
		s = s+b*b*b;
	}
	if(s==c) {
		printf("%d is an armstrong number",s);
	}
	else {
		printf("%d is not an armstrong number because result is: %d",c,s);
	}
	getch();
}
