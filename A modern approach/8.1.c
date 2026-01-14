#include <stdio.h>
#include <stdbool.h>

int main(void){
	printf("Enter zero or negative number to stop: \n");
	
	while(1){
		long n;
		int count[10] = {0};
		
		bool has_repeated = false;
		printf("Enter a number: ");
		scanf("%ld", &n);
		
		if(n <= 0){
			break;
		}
		
		long temp = n;
		while(temp > 0){
			int digit = temp % 10;
			count[digit]++;
			
			temp /= 10;
		}
		
		printf("Repeated numbers: ");
		for(int i = 0; i < 10; i++){
			if(count[i] > 1){
				printf("%4d", i);
				has_repeated = true;
			}
		}
		if(!has_repeated)printf("Null");
		
		printf("\n");
		
		
		printf("Digits: \t");
		for(int i = 0; i < 10; i++){
			printf("%4d", i);
		}
		printf("\nOccurrences:\t");
		for(int i = 0; i <10; i++){
			printf("%4d", count[i]);
			
			
		}
		printf("\n");
	}
	
	return 0;
} 
