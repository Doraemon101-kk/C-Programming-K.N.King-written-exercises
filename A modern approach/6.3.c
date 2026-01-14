#include <stdio.h>

int gcd(int m, int n){
	int t;
	while(n != 0){
		t = m % n;
		m = n;
		n = t;
	}
	
	return m;
	
}
int main(){
	int denom, div;
	printf("Enter a fraction: ");
	scanf("%d/%d", &div, &denom);
	
	int k = gcd(div, denom);
	
	denom /= k;
	div /= k;
	
	printf("The lowest terms: %d/%d", div, denom);
	
	return 0;
}