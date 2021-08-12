// input-statement
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main() { 
	int p,r,t,i;
	printf("enter principle amount:");
	scanf("%d",&p);
	printf("enter rate:");
	scanf("%d",&r);
	printf("enter time:");
	scanf("%d",&t);
	i = p*r*t/100;
	printf("simple interest is:%d",i);
	getch();
	return 0;
} 
