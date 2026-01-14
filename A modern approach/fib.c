#include <stdio.h>

int main(){
	int fib[40] = {0, 1};
	for(int i = 2; i < 40; i ++){
		fib[i] = fib[i-2] + fib[i-1];
	}
	
	for(int i = 0; i < 40; i++){
		printf("%d\n", fib[i]);
	}
	
	return 0;
}