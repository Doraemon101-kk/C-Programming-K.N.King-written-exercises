#include <stdio.h>
#include <stdbool.h>

bool search(int n, int m,const int a[n][m], int key){
	const int *p = &a[0][0];
	
	const int *end = p + n*m;
	int found = 0;
	
	for(p = &a[0][0]; p < end; p++){
		if(*p == key){
			found = 1;
			return true;
			
		}
	}
	if(!found)return false;
	
}

int find_largest(const int *row, int size) {
    int max = *row;
    for (int i = 1; i < size; i++) {
        if (row[i] > max) max = row[i];
    }
    return max;
}

int main(){
	int temperatures[7][24];
	
	for(int i = 0; i <7; i++){
		for(int j = 0; j < 24; j++){
			scanf("%d", &temperatures[i][j]);
		}
	}
	
	bool found = search( 7, 24, temperatures , 32);
	if(found)printf("found");else printf("Not found");
	
	printf("Get which day:");
	int i;
	scanf("%d", &i);
	const int *p = temperatures[i];
	for(int j= 0; j < 24; j++){
		printf(" %d",*(p + j));
	}
	printf("\n");
	
	for (int day = 0; day < 7; day++) {
        int max_temp = find_largest(temperatures[day], 24);
        printf("Day %d: %d\n", day + 1, max_temp);
    }
    
	return 0;
}

/*14. 假设下面的数组含有一周7天24小时的温度读数，数组的每一行是某一天的读数： 
int temperatures[7][24]; 
编写一条语句，使用search函数（见练习题7）在整个temperatures数组中寻找值32。 
15. 编写一个循环来显示（练习题14中的）temperatures数组中第i行存储的所有温度读数。利用指针
来访问该行中的每个元素。 
16. 编写一个循环来显示（练习题 14中的）temperatures 数组一星期中每一天的最高温度。循环体应
该调用find_largest 函数，且一次传递数组的一行。

*/