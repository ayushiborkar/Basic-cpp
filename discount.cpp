// discount
// updated 2021-08
#include<stdio.h>
#include<conio.h>
main()
{
		int lp,d,sp;
		printf("enter list price:");
		scanf("%d",&lp);
		d = lp*10/100;
		sp = lp-d;
		printf("list price is:%d",lp);
		printf("\ndiscount is:%d",d);
		printf("\nselling price is:%d",sp);
		getch();
		return(0);
}
