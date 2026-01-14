/*2. 编写一个程序，要求用户输入24小时制的时间，然后显示12小时制的格式： 
Enter a 24-hour time: 21:11
Equivalent 12-hour time: 9:11 PM 
注意不要把12:00显示成0:00。

*/

#include <stdio.h>

int main(){
	int h, min, ap;
	
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &h, &min);
	
	if(h / 12 > 1){
		h %= 12;
		printf("Equivalent 12-hour time: %d:%.2d PM", h, min);
	}else{
		printf("Equivalent 12-hour time: %d:%.2d AM", h, min);
	}
	
	return 0;
}