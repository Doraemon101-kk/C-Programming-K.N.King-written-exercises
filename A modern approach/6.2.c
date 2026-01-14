#include <stdio.h>

int main(){
	int m, n ,t;
	int gcd;
	
	printf("Enter two integers: ");
	scanf("%d%d", &m, &n);
	
	while(n != 0){
		t = m % n;
		m = n;
		n = t;
	}
	
	gcd = m;
	
	printf("Greatest common divisor: %d", gcd);
	
	return 0;
}