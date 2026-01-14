#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, result;
	char c;
	scanf("%d", &result);
	
	while(1){
		c = getchar();
		
		if(c == '=')break;
		if( c != '+'&& c!= '-' && c != '*' && c != '/')
		{
			printf("错误的运算符:%c", c);
			return 0;
		}
		
		
		
		scanf("%d", &n);
		
		switch(c){
			case'+':
			result += n;
			break;
			case'-':
			result -= n;
			break;
			case'*':
			result *= n;
			break;
			case'/':
				if(n == 0){
					printf("错误的运算符:%c", c);
				}
				else{
				result /= n;
				}
				break;	
		}
		
	}
	printf("%d", result);
	return 0;
}