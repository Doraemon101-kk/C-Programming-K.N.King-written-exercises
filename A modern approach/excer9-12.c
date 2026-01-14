#include <stdio.h>
#define N 10

double inner_product(double a[], double b[], int n){
	double sum = 0;
	
	for(int i = 0; i < n; i++){
		sum += a[i] * b[i];
	}
	
	return sum;
}

int main(){
	double a[N], b[N];
	for(int i = 0; i < N; i++){
		scanf("%lf", &a[i]);
	}
	for(int i = 0; i < N; i++){
		scanf("%lf", &b[i]);
	}
	
	printf("%lf", inner_product(a, b, N));
	
	return 0;
}