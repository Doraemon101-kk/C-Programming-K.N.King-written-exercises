#include <stdio.h>

int main(){
	int n, q = 1;
	scanf("%d", &n);
	
	double e;
	e = 1.0;
	for(int i = 1; i<= n; i++){
		q *= i;
		e += 1.0/q;
		
	}
	printf("%lf", e);
	return 0;
}