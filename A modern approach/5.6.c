/*6. 修改4.1节的upc.c程序，使其可以检测UPC的有效性。在用户输入UPC后，程序将显示VALID或
NOT VALID。 
*/

#include <stdio.h>

int main(){

	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
	first_sum, second_sum, total, result, check_digit;
	
	
	printf("Enter the first (single) digit: ");
	scanf("%1d", &d);
	
	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	
	printf("Enter second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
	
	printf("Enter the check digit: ");
    scanf("%1d", &check_digit);
	
	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1+ i3+ i5+ j2  +j4 ;
	
	total = 3 * first_sum +second_sum;
	
    result = 9 - ((total - 1) % 10);
	
	if(result == check_digit ){
		printf("Valid");
		
	}else{
		printf("Not Valid");
	}
	return 0;
	

}
