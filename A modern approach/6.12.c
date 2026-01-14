#include <stdio.h>

int main(){
	int q = 1;
	double x;
	scanf("%d", &x);
	
	double e;
	e = 1.0;
	for(int i = 1; 1.0/q > x; i++){
		q *= i;
		e += 1.0/q;
		
	}
	printf("%lf", e);
	return 0;
}