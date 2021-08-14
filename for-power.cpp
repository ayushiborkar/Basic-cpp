// for statement
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main() {
	int i,a,b,p=1;
	printf("enter any number:");
	scanf("%d",&a);
	printf("enter any power:");
	scanf("%d",&b);
	for(i=1;i<=b;i++) {
		p = p*a;
	}
	printf("result of %d to power %d is:%d",a,b,p);
	getch();
}
