#include <stdio.h>

/*17. 用指针算术运算代替数组取下标来重新编写下面的函数。（换句话说，消除变量 i、j 和所有用到[]
运算符的地方。）要求使用单层循环而不是嵌套循环。 
int sum_two_dimensional_array(const int a[][LEN], int n) 
{  
  int i, j, sum = 0; 
  for (i = 0; i < n; i++) 
    for (j = 0; j < LEN; j++) 
      sum += a[i][j]; 
  return sum; 
}*/

int sum_two_dimensional_array(const int a[][LEN], int n) 
{  
	;
	const int *end = p+ n * LEN;
	
  	int sum = 0; 
  	for (const int *p = &a[0][0]; p < end; p++) 
      sum += *p; 
    return sum; 
    
}