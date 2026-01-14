#include <stdio.h>
#define MAX_LEN 200

int main()
{
	char sentence[MAX_LEN];
	char t = '\0';
	int len = 0;
	
	printf("Enter a sentence:");
	
	while (len < MAX_LEN - 1){
		char ch = getchar();
		
		if(ch == '.' || ch == '?' || ch == '!'){
			t = ch;
			break;
		}
		
		sentence[len++] = ch;
	}
	
	sentence[len] = '\0';
	
	printf("Reversal of sentence:");
	
	int end = len;
	for(int i = len - 1; i >= 0; i--){
		if(sentence[i] == ' ' || i == 0){
		
		int start = (i == 0)? 0: i + 1;
		
		for(int j = start; j < end; j++){
			putchar(sentence[j]);
		}
		
		if(i > 0){
			putchar(' ');
		}
		
		end = i;
		}
	}
	
	printf("%c\n", t);
	
	return 0;
}