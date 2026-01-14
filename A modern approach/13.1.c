#include <stdio.h>
#include <string.h>

#define N 21

int main(){
	char word[N];
	
	char smallest_word[N];
	char largest_word[N];
	
	int first = 1;
	
	
	while(1){
		printf("Enter word:");
		
		if(scanf("%20s", word) != 1)break;
		
		if(strlen(word) == 4)break;
		
		if(first == 1){
			strcpy(smallest_word, word);
			strcpy(largest_word, word);
			first = 0;
		}else{
			if(strcmp(smallest_word, word) > 0){
				strcpy(smallest_word, word);
			}
			if(strcmp(largest_word, word) < 0){
				strcpy(largest_word, word);
			}
		}
	}
	if(!first){
	
	printf("Smallest word: %s\n", smallest_word);
	printf("Largest word: %s\n", largest_word);
	}
	return 0;
}