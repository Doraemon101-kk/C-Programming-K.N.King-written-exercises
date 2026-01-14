#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Enter a sentence:");
	
	char c;
	int cnt = 0;
	while(1){
		c = getchar ();
		if(c == '\n')break;
		
		switch(c){
			case 'a':cnt ++;break;
			case 'e':cnt ++;break;
			case 'i':cnt ++;break;
			case 'o':cnt ++;break;
			case 'u':cnt ++;break;
			
			default:break;
		}
	}
	
	printf("Your sentence contains %d vowels.", cnt);
	
	return 0;
}