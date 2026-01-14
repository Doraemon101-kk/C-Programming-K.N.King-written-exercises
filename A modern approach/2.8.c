#include <stdio.h>

int main(){
	double loan, interest_rate, pay, month_rate;
	printf("Enter amount of loan:\n");
	scanf("%lf", &loan);
	printf("Enter interst rate:\n");
	scanf("%lf", &interest_rate);
	printf("Enter monthly payment:\n");
	scanf("%lf", &pay);
	
	month_rate = interest_rate / 100 / 12 + 1;
	double loan1, loan2, loan3;
	
	loan1 = loan * month_rate - pay;
	loan2 = loan1 * month_rate - pay;
	loan3 = loan2 * month_rate - pay;
	printf("Balance remaining after first payment:$%.2lf\n", loan1);
	printf("Balance remaining after second payment:$%.2lf\n", loan2);
	printf("Balance remaining after third payment:$%.2lf\n", loan3);
	
	return 0;
}