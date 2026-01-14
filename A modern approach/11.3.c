#include <stdio.h>


void reduce(int numerator, int denominator,
			int *reduced_numerator,
			int *reduced_denominator)
{	
	int temp;
	while(denominator != 0){
		temp = numerator % denominator;
		numerator = denominator;
		denominator = temp;
	}

	*reduced_numerator /= numerator;
	*reduced_denominator /= numerator;
}
int main(){
	int numerator, denominator;
	scanf("%d/%d", &numerator,&denominator);
	
	reduce(numerator, denominator,&numerator,&denominator);
	
	printf("%d/%d",numerator, denominator);
}