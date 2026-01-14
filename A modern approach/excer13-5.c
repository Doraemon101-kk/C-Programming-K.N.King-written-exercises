#include <stdio.h>
#include <string.h>
#include <ctype.h>

void capitalize(char s[]){
	for(int i = 0; s[i] != '\0'; i++){
		s[i] = toupper((unsigned char)s[i]);
	}
}

void p_capitalize(char *s){
	for(; *s != '\0'; s++){
		*s = toupper((unsigned char) *s);
	}
}