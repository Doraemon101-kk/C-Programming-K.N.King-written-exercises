#include <stdio.h>
#define MAX_LEN 200

int main()
{
	char sentence[MAX_LEN];
	char *p = sentence;
	char t ='\0';
	
	printf("Enter a sentence:");
	int ch;
	
	while ((ch = getchar()) != '\n' && p < sentence + MAX_LEN - 1) {
        if (ch == '.' || ch == '?' || ch == '!') {
            t = (char)ch;
            break;
        }
        *p++ = (char)ch;   // 指针写入并后移
    }
	
	*p = '\0';
	
	printf("Reversal of sentence:");
	
    char *end = p;
	for(char *i = p- 1 ; i >= sentence; i--){
		if(*i == ' ' || i == sentence){
		
		char *start = (i == sentence )? sentence: i + 1;
		
		for(char* j = start; j < end; j++){
			putchar(*j);
		}
		
		if(i > sentence){
			putchar(' ');
		}
		
		end = i;
		}
	}
	if(t)
	printf("%c\n", t);
	
	return 0;
}