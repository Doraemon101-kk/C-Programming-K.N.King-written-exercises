#include <stdio.h>
#define N 10
int main(){
	double ident[N][N];
	
	double *end = &ident[0][0] + N *N;
	int zeros = N;
	
	for(double *p = &ident[0][0]; p < end; p++){
		if(zeros == 0){
			*p = 1.0;
			zeros = 0;
		}
		else{
			*p = 0.0;
			zeros++;
		}
	}
	
	
	return 0;
}