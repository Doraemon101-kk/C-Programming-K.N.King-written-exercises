#include <stdio.h>

int power(int n, int k){
	if(k == 0)return 1;
	if(k % 2 == 0){
		return power(n, k/2) * power(n, k/2);
	}else{
		return n * power(n , k - 1);
	}
	
}

int main(){
	int x, n;
	
	scanf("%d%d", &x, &n);
	printf("%d",  power(x , n));
	
	return 0;
}