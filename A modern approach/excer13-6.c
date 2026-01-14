#include <stdio.h>
#include <string.h>

void censor(char s[])
{
	while((char *p = strstr(s, "foo")) != NULL){
	p[2] = p[1] = p[0] = 'x';
		s = p + 3;
	}
}
