/*11. 编写一个程序，要求用户输入一个两位数，然后显示该数的英文单词： 
Enter a two-digit number: 45
You entered the number forty-five. 
97 
提示：把数分解为两个数字。用一个switch语句显示第一位数字对应的单词（“twenty”“thirty”等），
用第二个switch语句显示第二位数字对应的单词。不要忘记11～19需要特殊处理。
*/

#include <stdio.h>
int main(){
	const char*ones[] = {
	"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	
	const char*tens[] = {
	"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	int num, ten, one;
	printf("Enter a two-digit number: ");
	scanf("%d", &num);
	
	ten = num / 10;
	one = num % 10;
	
	if(one == 0){
		printf("%s\n", tens[ten - 2]);
		
	}else{
		printf("%s-%s\n", tens[ten - 2], ones[one]);
	}
	
	return 0;
}