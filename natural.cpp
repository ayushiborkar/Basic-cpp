// while-loop
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main() {
	int i;
	i = 1;
	while(i<=10) { // natural numbers
		printf("\n%d",i);
		i = i+1;
	}
	i = 2;
	while(i<=20) { //even numbers
		printf("\n\t%d",i);
		i = i+2;
	}
	getch();
}
