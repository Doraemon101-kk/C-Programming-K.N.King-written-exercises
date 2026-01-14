#include <stdio.h>

int main(){
	int a[5][5] = {0};
	int row[5] ={0};
	int col[5] = {0};
	
	for(int i = 0; i < 5; i++){
		printf("Enter row %d:", i + 1);
		
		for(int j = 0; j<5 ; j++){
			scanf("%d", &a[i][j]);
			row[i] += a[i][j];
		}
	}
	for(int j = 0; j < 5; j ++){
		for(int i =0 ; i < 5; i++){
			col[j] += a[i][j];
		}
	}
	printf("Row totals:%d %d %d %d %d\n", row[0], row[1], row[2], row[3], row[4]);
	
	printf("Column totals:%d %d %d %d %d", col[0], col[1], col[2], col[3], col[4]);
	
	return 0;
}