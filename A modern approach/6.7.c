#include <stdio.h>

int main(){
	int i, n, odd;
	
	printf("This program prints a table of squares.\n");
	
	printf("Enter number of entries in table: ");
	
	scanf("%d", &n);
	
	i = 1;
	odd = 3;
	
	for(int i = 1; i <= n; ++i){
		printf("%10d%10d\n", i, square);
		++i;
		square+= odd;
		odd += 2;
	}
	
	return 0;
}