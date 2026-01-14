#include <stdio.h>

int main(){
	int i, n;
	scanf("%d", &n);
	
	for(i= 2; i*i < n; i+=2){
		printf("%d", i*i);
	}
	
	return 0;
}