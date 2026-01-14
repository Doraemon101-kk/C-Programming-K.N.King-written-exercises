#include <stdio.h>

int main(void){
	int x;
	scanf("%d", &x);
	int result;
	result = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x -x*x + 7*x -6;
	
	//result = ((((3*x + 2)*x - 5)*x -1 )* x + 7)*x -6;
	printf("%d", result);
	
	return 0;
}