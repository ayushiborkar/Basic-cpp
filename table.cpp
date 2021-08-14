// while-loop
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main() {
	int i,t;
	i = 1;
	printf("enter any number:");
	scanf("%d",&t);
	while(i<=10) {
		printf("\n%d*%d = %d",t,i,t*i);
		i = i+1;
	}
	getch();
}
