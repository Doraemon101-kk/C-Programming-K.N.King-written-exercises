#include <stdio.h>

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
	
	double ave[5];
	int max[5];
	int min[5];
	
	max[0] = col[0];
	min[0] = col[0];
	
	for(int i = 0;i < 5; i++){
		ave[i] = col[i] *1.0 / 5.0;
		if(max[i] < col[i])max[i] = col[i];
		if(min[i] > col[i])min[i] =col[i];
	}
	
	printf("Student' grades:%d %d %d %d %d\n", row[0], row[1], row[2], row[3], row[4]);
	
	printf("Average:%d %d %d %d %d\n", ave[0], ave[1], ave[2], ave[3], ave[4]);
	printf("Highest scores:%d %d %d %d %d\n", max[0], max[1], max[2], max[3], max[4]);
	printf("Lowest scores:%d %d %d %d %d\n", min[0], min[1], min[2], min[3], min[4]);

	
	return 0;
}