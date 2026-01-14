/*10.  利用 switch 语句编写一个程序，把用数字表示的成绩转换为字母表示的等级。 
Enter numerical grade: 84
Letter grade: B 
使用下面的等级评定规则：A为90～100，B为80～89，C为70～79，D为60～69，F为0～59。如
果成绩高于100或低于0，则显示出错消息。提示：把成绩拆分成2个数字，然后使用switch语句
判定十位上的数字。
*/

#include <stdio.h>
int main(){
	int grade;
	
	printf("Enter numerical grade: ");
	scanf("%d", &grade);
	
	if(grade < 0 || grade > 100){
		printf("INVALID INPUT");
		
	}else{
	
	
	grade /= 10;
	
	
	switch(grade){
		case 9: case 10:
		printf("Letter grade: A");
		case 8:
			printf("Letter grade: B");
		case 7:
			printf("Letter grade: C");
		case 6:
		    printf("Letter grade: D");
		default: printf("Letter grade: F");
	}
	
	}
	return 0;
}