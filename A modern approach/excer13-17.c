#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool test_extension(const char *file_name, const char *extension){
	const char *s = file_name;
	
	while(*s)s++;
	while(*s != '.')s--;
	
	s++;
	
	while(*s && *extension){
		if(toupper(*s) != toupper(*extension)){
			return false;
		}
		s++;
		extension++;
	}
	return true;
}
