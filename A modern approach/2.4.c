#include <stdio.h>

int main()
{
	double dollar;
	printf("Enter an amount:");
	scanf("%lf", &dollar);
	
	printf("With tax added: $%.2lf", dollar * 1.05);
	
	return 0;
}