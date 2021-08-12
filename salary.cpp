// input-statement
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main() {
	float bs,da,ta,tp,gs;
	printf("enter basic salary:");
	scanf("%f",&bs);
	da = bs*30/100;
	ta = bs*20/100;
	tp = bs*5/100;
	gs = bs+da+ta-tp;
	printf("basic salary is:%f",bs);
	printf("\ndaily allowance is:%f",da);
	printf("\ntravel allowance is:%f",ta);
	printf("\ntax payable is:%f",tp);
	printf("\ngross salary is:%f",gs);
	getch();
}
