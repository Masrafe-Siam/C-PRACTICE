#include<stdio.h>
int main()
{
	int dollar,visitors,taka,paid_taka,return_taka;
	printf("Dollar to Taka exchange rate: ");
	scanf("%d",&dollar);
	printf("Number of visitors: ");
	scanf("%d",&visitors);
	taka=dollar*visitors;
	printf("Total Due: %d\n",taka);
	printf("Amount Paid: ");
	scanf("%d",&paid_taka);
	return_taka=paid_taka-taka;
	printf("Return Amount: %d",return_taka);
	return 0;
}
