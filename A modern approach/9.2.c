#include <stdio.h>
double tax_count(double income){
	double tax;
	
	if(income < 750){
		tax = .01 * income;
	}else if(income < 2250){
		income -= 750;
		tax = .02 * income + 7.50f;
	}else if(income < 3750){
		income -= 2250;
		tax = .03* income + 37.50f;
	}else if(income < 5250){
		income -= 3750;
		tax = .04* income + 82.50f;
	}else if(income < 7000){
		income -= 5250;
		tax = .05* income + 142.50f;
	}else {
		income -=7000;
		tax = .06*income +230.00f;
	}
	
	return tax;
}
int main()
{
	double income, tax;
	printf("Enter the income: ");
	scanf("%lf", &income);
	
	printf("The tax you should pay is %lf", tax_count(income));
	
	return 0;
}