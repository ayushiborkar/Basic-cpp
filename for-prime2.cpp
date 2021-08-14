// for-statement
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main() {
	int n,i;
	for(n=1;n<=50;n++)
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0) {
				break;
			}
		}
		if(n==i) {
			printf("\n%d",n);
		}
	}
	getch();
}
