#include <stdio.h>

int *find_largest(int a[], int n){
	int *largest = &a[0];
	
	for(int i = 0; i < n; i++){
		largest = &a[i];
	}
	
	return largest;
}

int main(){
	int arr[3]= {1,2,3};
	int *p = find_largest(arr, 3);
	
	printf("%d", *p);
	
	return 0;
}