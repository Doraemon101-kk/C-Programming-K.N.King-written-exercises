/*11. 编写一个程序，要求用户输入一个两位数，然后显示该数的英文单词： 
Enter a two-digit number: 45
You entered the number forty-five. 
97 
提示：把数分解为两个数字。用一个switch语句显示第一位数字对应的单词（“twenty”“thirty”等），
用第二个switch语句显示第二位数字对应的单词。不要忘记11～19需要特殊处理。
*/

#include <stdio.h>
int main(){
	int num, ten, one;
	printf("Enter a two-digit number: ");
	scanf("%d", &num);
	
	ten = num / 10;
	one = num % 10;
	
	printf("You entered the number ");
	if(ten == 1){
		switch(one){
		case 1:	printf("eleven");break;
		case 2:	printf("twelve");break;
		case 3:	printf("thirteen");break;
		case 4:	printf("fourteen");break;
		case 5:	printf("fifteen");break;
		case 6:	printf("sixteen");break;
		case 7:	printf("seventeen");break;
		case 8:	printf("eighteen");break;
		case 9:	printf("nineteen");break;
		case 0:	printf("ten");break;
		}
	}else{
	    
		switch(ten){
		case 2:	printf("twenty");break;
		case 3:	printf("thirty");break;
		case 4:	printf("forty");break;
		case 5:	printf("fifty");break;
		case 6:	printf("sixty");break;
		case 7:	printf("seventy");break;
		case 8:	printf("eighty");break;
		case 9:	printf("ninety");break;
	
		
		}
		
		
		if(one != 0){
		printf("-");
		switch(one){
		case 1: printf("one");break;
		case 2: printf("two");break;
		case 3: printf("three");break;
		case 4: printf("four");break;
		case 5: printf("five");break;
		case 6: printf("six");break;
		case 7: printf("seven");break;
		case 8: printf("eight");break;
		case 9: printf("nine");break;
	
		}
		}
	}
	
	printf(".");
	
	return 0;
}