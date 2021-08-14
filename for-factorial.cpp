// for statement
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main() {
	int i,a,f=1;
	printf("enter any number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++) {
		f = f*i;
	}
	printf("factorial is:%d",f);
	getch();
}
