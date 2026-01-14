#include <stdio.h>

int main(){
	int pre, gi, pc, in, cd;
	printf("Enter ISBN:");
	scanf("%d-%d-%d-%d-%d", &pre, &gi, &pc, &in, &cd);
	
	printf("GS1 prefix: %d\n", pre);
	printf("Group identifier: %d\n", gi);
	printf("Publisher code: %d\n", pc);
	printf("Item number: %d\n", in);
	printf("Check digit: %d\n", cd);
	
	return 0;
}