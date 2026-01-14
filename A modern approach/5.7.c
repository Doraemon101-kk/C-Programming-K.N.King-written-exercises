/*7. 编写一个程序，从用户输入的4个整数中找出最大值和最小值： 
 
Enter four integers: 21 43 10 35 
Largest: 43 
Smallest: 10 
 
  要求尽可能少用if语句。提示：4条if语句就足够了。 
  */
  
#include <stdio.h>

int main(){
	int num1, num2, num3, num4;
	int max, min;
	
	printf("Enter four integers: ");
	scanf("%d%d%d%d", &num1, &num2, &num3, &num4);
	
	if(num1 < num2){
		max = num2;
		min = num1;
	}else{
		max = num1;
		min = num2;
	}
	
	if(num3 > max){
		max = num3;
	}else if(num3 < min){
		min = num3;
	}
	
	if(num4 > max){
		max = num4;
	}else if(num4 < min){
		min = num4;
	}
	
	printf("Largest: %d\nSmallest: %d", &max, &min);
	
	return 0;
	
}