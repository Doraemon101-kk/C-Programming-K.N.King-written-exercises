#include <stdio.h>
/*
1.编写一个程序，确定一个数的位数： 
Enter a number: 374
The number 374 has 3 digits 
95 
假设输入的数最多不超过4位。提示：利用if语句进行数的判定。例如，如果数在0和9之间，那
么位数为1；如果数在10和99之间，那么位数为2。
*/
int main(){
	int num, digit;
	printf("Enter a number: ");
	scanf("%d", &digit);
	
	if(num >=0 && num < 10){
		digit = 1;
	}else if(num >= 10 && num < 100){
		digit = 2;
	}else if(num >= 100 && num < 1000){
		digit = 3;
	}else{
		digit = 4;
	}
	
	printf("The number %d has %d digits.", &num, &digit);
	
	return 0;
}