#include <stdio.h>

void remove_filename(char *url){
    char*p = url
	while(*p) p++;
	
	while(p > url && *p != '/')p--;
	
	if(*p == '/'){
		*p = '\0';
	}
}