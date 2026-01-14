#include <stdio.h>

int main(void){
	int height = 10, length = 8, width = 8, volume;
	
	volume = height * width * length;
	
	printf("Dimensions:%dx%dx%d\n", height, width, length);
	printf("Volume (cubic inches):%d\n", volume);
	printf("Dimensional weight(pounds): %d\n", (volume + 165)/ 166);
	
	return 0;
}