#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(){
	char broad[N][N];
	
	for(int i =0 ;i < N; i++){
		for(int j =0; j < N; j++){
			broad[i][j] = '.';
		}
	}
	char c = 'A';
	broad[0][0] = c;
	c ++;
		
	int row_code = 0;
	int col_code = 0;
	
	srand((unsigned) time(NULL));
	while(c <= 'Z'){
		int blocked = 0;
		
		if(row_code +1 >= N || broad[row_code + 1][col_code] != '.')blocked++;
		if(col_code +1 >= N || broad[row_code][col_code + 1] != '.')blocked++;
		
		if(row_code < 1 || broad[row_code - 1][col_code] != '.')blocked++;
		if(col_code < 1 || broad[row_code][col_code - 1] != '.')blocked++;
		
		if(blocked == 4)break;
		
		int turn = rand() % 4;
		int new_row = row_code;
		int new_col = col_code;
		
		switch(turn){
			case 0: new_row ++;break;
			case 1: new_row --;break;
			case 2: new_col ++;break;
			case 3: new_col --;break;
		}
		
		if(new_row >= 0 && new_row < N && 
           new_col >= 0 && new_col < N && 
           broad[new_row][new_col] == '.'){
            
            row_code = new_row;
            col_code = new_col;
            
            broad[row_code][col_code] = c;
            c++;
        }
	}
	
	for(int i =0; i < N; i ++){
		for(int j =0; j < N;j ++){
			printf("%c", broad[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}