/*1.编写程序，要求用户输入一串整数（把这串整数存储在数组中），然后通过调用 selection_sort
函数来排序这些整数。在给定n个元素的数组后，selection_sort函数必须做下列工作： 
(a) 搜索数组找出最大的元素，然后把它移到数组的最后； 
(b) 递归地调用函数本身来对前n1个数组元素进行排序。 
*/

#include <stdio.h>
void selection_sort(int a[], int n){
	
	if(n == 1)return;
	
	int max_index = 0;
	
	for(int i = 1; i < n; i ++){
		if(a[i] > a[max_index])
		max_index = i;
	}
	
	if(max_index != n - 1){
		int t = a[max_index];
		a[max_index] = a[n-1];
		a[n - 1] = a[t];
	}
	
	selection_sort(a, n - 1);
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	
	for(int i =0; i < n; i ++){
		scanf("%d", &a[i]);
	}
	
	selection_sort(a , n);
	return 0;
}

