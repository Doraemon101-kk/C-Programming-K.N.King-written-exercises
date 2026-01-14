#include <stdio.h>
#define N 10

double inner_product(double a[], double b[], int n){
	double sum = 0;
	double *end = a + n;
	for(double *p= a, *q= b; p < end; p++, q++){
		sum += *p * *q;
	}
	
	return sum;
}

int main(){
	double a[N],b[N];
	
	for(int i = 0; i < N;i ++)
	scanf("%d", &a[i]);
	
	for(int i =0; i < N;i ++){
		scanf("%d", &b[i]);
	}
	
	double sum = inner_product(a, b,N);
	
	printf("%lf", sum);
	
	return 0;
}