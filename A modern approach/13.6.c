#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 50
#define NUM_PLANETS 9
void lower_str(char*dst, const char*src){
	while(*src){
		*dst++ = tolower((unsigned char)*src ++);
	}
	*dst = '\0';
}

int main(int argc, char*argv[]){
	char *planets[] ={"Mercury", "Venus", "Earth",
					"Mars", "Jupiter", "Saturn",
					"Uranus", "Neptune", "Pluto"};
	
	char lower_argv[MAX_LEN];
	char lower_planets[MAX_LEN];
			
	int i, j;
	for(i = 1; i< argc; i++){
		
		lower_str(lower_argv, argv[i]);
		
		for(j = 0; j <NUM_PLANETS; j++){
			lower_str(lower_planets, planets[j]);
			
			if((strcmp(lower_argv, lower_planets)) == 0){
			printf("%s is planet %d\n", argv[i], j+1);
			break;
			}
		}
		if(j == NUM_PLANETS){
			printf("%s is not a planet\n", argv[i]);
		}
	}				

	return 0;
}