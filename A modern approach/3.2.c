#include <stdio.h>

int main ()
{
	int num, m, d ,y;
	double price;
	printf("Enter item number:");
	scanf("%d", &num);
	printf("Enter unit price:");
	scanf("%lf", &price);
	printf("Enter purchase date(mm/dd/yyyy):");
	scanf("%d/%d/%d", &m, &d, &y);
	
	printf("Item\tUnit\tPurchase\n");
	printf("\tPrice\tDate\n");
	
	printf("%d\t$%7.2lf\t%2.2d/%2.2d/%4d", num, price, m, d, y);
	
	return 0;
}