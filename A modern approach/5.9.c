/*9.编写一个程序，提示用户输入两个日期，然后显示哪一个日期更早： 
Enter first date (mm/dd/yy): 3/6/08
Enter second date (mm/dd/yy): 5/17/07
5/17/07 is earlier than 3/6/08

*/

#include <stdio.h>

int main(){
	int d1,m1,y1;
	int d2,m2,y2;
	
	int ed1,em2,ey3;
	
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &m1, &d1, &y1);
	
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &m2, &d2, &y2);
	
	if(y1 > y2){
		printf("%d%d%d is earlier than %d%d%d", &m2, &d2, &y2, &m1, &d1, &y1);
	}else if(y1 == y2){
		if(m1 > m2){
		printf("%d%d%d is earlier than %d%d%d", &m2, &d2, &y2, &m1, &d1, &y1);
		}else if(m1 == m2){
			if(d1 > d2){
		printf("%d%d%d is earlier than %d%d%d", &m2, &d2, &y2, &m1, &d1, &y1);
		}
			
		}
	}else{
	    printf("%d%d%d is earlier than %d%d%d", &m1, &d1, &y1, &m2, &d2, &y2);
	}
	return 0;
}