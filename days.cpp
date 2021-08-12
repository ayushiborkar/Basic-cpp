// days
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main() {
	int y,m,d,a,b;
	printf("enter days:");
	scanf("%d",&a);
	y = a/365;
	b = a%365; // mode value
	m = b/30;
	d = b%3;
	printf("it is %d years %d months %d days",y,m,d);
	getch();
}
