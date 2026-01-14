#include <stdio.h>
int power(int n, int k){
	if(k == 0)return 1;
	return n * power (n , k - 1);
}
int calculate(int n){
	int result = 3 * power(n, 5) + 2 * power(n, 4) - 5 * power(n, 3) - power(n, 2) + 7 *n - 6;
}

int main(){
	int n;
	scanf("%d", &n);
	
	printf("%d",calculate(n) );
	
	return 0;
}