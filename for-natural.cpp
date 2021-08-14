// for-statement
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main() {
	int i;
	for(i=1;i<=10;i++) { // i++ is i = i+1
	printf("\n%d",i);
	}
	for(i=2;i<=20;i=i+2) { // even numbers
	printf("\n\t%d",i);
	}
	getch();
}
