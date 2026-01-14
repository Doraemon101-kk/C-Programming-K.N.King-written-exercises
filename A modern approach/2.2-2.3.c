#include <stdio.h>

int main()
{
	int r;
	double V;
	scanf("%d", &r);
	V = 4.0f/3.0f * r * r * r;
	
	printf("V = %.3f cubic meter", V);
	
	return 0;
}