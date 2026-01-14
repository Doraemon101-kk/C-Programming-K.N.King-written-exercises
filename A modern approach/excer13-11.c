 int strcmp(char *s, char *t) 
{ 
    while(*s && (*s == *t)){
    	s++;
	}
  return *s - *t;
}