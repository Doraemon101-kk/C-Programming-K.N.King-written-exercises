#include <stdio.h>
/*10. 第5章的编程题9要求编写程序判断哪个日期更早。泛化该程序，使用户可以输入任意个日期。用
0/0/0指示输入结束，不再输入日期。 
 
Enter a date (mm/dd/yy): 3/6/08 
Enter a date (mm/dd/yy): 5/17/07 
Enter a date (mm/dd/yy): 6/3/07 
Enter a date (mm/dd/yy): 0/0/0 
5/17/07 is the earliest date 

*/
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