#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define N 1000

int compute_vowel_count(const char *sentence){
	int cnt = 0;
	for(int i = 0; sentence[i] != '\0'; i++){
		char ch = tolower ((unsigned)sentence[i]);
	switch(ch){
			case 'a':cnt ++;break;
			case 'e':cnt ++;break;
			case 'i':cnt ++;break;
			case 'o':cnt ++;break;
			case 'u':cnt ++;break;
			
			default:break;
		}
	}	
	return cnt;
}

int main(){
	printf("Enter a sentence:");
	
	char sentence[N];
	fgets(sentence, sizeof(sentence), stdin);
	
	
	printf("Your sentence contains %d vowels.", compute_vowel_count(sentence));
	
	return 0;
}