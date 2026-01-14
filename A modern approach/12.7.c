#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min){
		
	int *p = a;
	int *end = a + n;
	
	*max = *min = *p++;
	
	for(; p < end; p++){
		if(*p > *max){
			*max = *p;
		}
		else if(*p < *min){
			*min = *p;
		}
		
	}
}

int main(void){
	int b[N], i, big, small;
	
	printf("Enter %d numbers:", N);
	for(i = 0; i < N; i++){
		scanf("%d", &b[i]);
	}
	
	max_min(b, N, &big, &small);
	
	printf("Largest:%d\n", big);
	printf("Smallest:%d\n", small);
	
	return 0;
}