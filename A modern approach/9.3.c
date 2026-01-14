#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

void generate_random_walk(char walk[][N]){
	for(int i =0 ;i < N; i++){
		for(int j =0; j < N; j++){
			walk[i][j] = '.';
		}
	}
	
	char c = 'A';
	walk[0][0] = c;
	c ++;
		
	int row_code = 0;
	int col_code = 0;
	
	srand((unsigned) time(NULL));
	while(c <= 'Z'){
		int blocked = 0;
		
		if(row_code +1 >= N || walk[row_code + 1][col_code] != '.')blocked++;
		if(col_code +1 >= N || walk[row_code][col_code + 1] != '.')blocked++;
		
		if(row_code < 1 || walk[row_code - 1][col_code] != '.')blocked++;
		if(col_code < 1 || walk[row_code][col_code - 1] != '.')blocked++;
		
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
           walk[new_row][new_col] == '.'){
            
            row_code = new_row;
            col_code = new_col;
            
            walk[row_code][col_code] = c;
            c++;
        }
	}

}

void print_array(char walk[][N]){
	for(int i =0; i < N; i ++){
		for(int j =0; j < N;j ++){
			printf("%c", walk[i][j]);
		}
		printf("\n");
	}
}


int main(){
	char walk[N][N];
	
	generate_random_walk(walk);
	
	print_array(walk);
	
	return 0;
}