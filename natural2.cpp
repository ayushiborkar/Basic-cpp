// while-loop
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main() {
	int i;
	i = 1;
	while(i<=20) { // odd numbers
		printf("\n%d",i);
		i = i+2;
	}
	i = 10;
	while(i>=1) { // descending order
		printf("\n\t%d",i);
		i = i-1;
	}
	getch();
}
