// if-statement
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main() {
	float bs,da,ta,gs;
	printf("enter basic salary:");
	scanf("%f",&bs);
	if(bs>25000) {
		da = bs*30/100;
		ta = bs*20/100;
	}
	if(bs<25000) {
		da = bs*20/100;
		ta = bs*10/100;
	}
	gs = bs+da+ta;
	printf("basic salary is:%f",bs);
	printf("\ndaily allowance is:%f",da);
	printf("\ntravel allowance is:%f",ta);
	printf("\ngross salary is:%f",gs);
	getch();
}
