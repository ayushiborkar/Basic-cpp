// while-loop
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main() {
	int i,s=0;
	i = 1;
	while(i<=10) { // square
		printf("\n%d",i*i);
		i = i+1;
	}
	i = 1;
	while(i<=10) { // sum
		printf("\n\t%d",i);
		s = s+i;
		i = i+1;
	}
	printf("\n\tsum is:%d",s);
	getch();
}
