// arithmetic
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main() {
	int a,b,s,d,p,q,r;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	s = a+b;
	d = a-b;
	p = a*b;
	q = a/b;
	r = a%b;
	printf("sum is:%d",s);
	printf("\ndifference is:%d",d);
	printf("\nproduct is:%d",p);
	printf("\nquotient is:%d",q);
	printf("\nremainder is:%d",r);
	getch();
}
