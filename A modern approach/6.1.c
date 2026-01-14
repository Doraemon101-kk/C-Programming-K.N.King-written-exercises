#include <stdio.h> 

int main(){
	double i, max;
	printf("Enter a nmuber:");
	scanf("%f", &i);
	max = i;
	while(i > 0){
		printf("Enter a nmuber:");
		scanf("%f", &i);
		if(i > max){
			max = i;
		}
	}
	
	printf("The max is %d", max);
	return 0;
}