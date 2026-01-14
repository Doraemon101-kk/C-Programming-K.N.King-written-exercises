#include <stdio.h>

void pay_amount(int dollar, int *twenty, int*ten, int*five, int* one){
	*twenty = dollar / 20;
	*ten = dollar % 20 / 10;
	*five = dollar % 20 % 10 / 5;
	*one = dollar % 20 % 10 % 5;
}
int main()
{
	int dollar;
	int twenty, ten, five, one;
	
	printf("Enter a dollar amount:");
	
	scanf("%d", &dollar);
	
	pay_amount(dollar, &twenty, &ten, &five, &one);
	printf("\t$20 bills: %d\n\t$10 bills: %d\n\t$5 bills: %d\n\t$1 bills: %d\n", twenty, ten, five, one);
	
	return 0;
}