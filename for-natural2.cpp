// for-statement
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main() {
	int i;
	for(i=1;i<=20;i=i+2) { // odd numbers
	printf("\n%d",i);
	}
	for(i=100;i<=1000;i=i+100) { // hundred
	printf("\n\t%d",i);
	}
	getch();
}
