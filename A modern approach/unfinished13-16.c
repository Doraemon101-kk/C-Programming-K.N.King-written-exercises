#include <stdio.h>
#include <string.h>
#define N 1000
/*16. 修改第12章的编程题1，使其包含如下函数： 
void reverse(char *message); 
函数的作用是反转message 指向的字符串。提示：使用两个指针，初始时一个指向字符串的第一个
字符，另一个指向最后一个字符；交换这两个字符，然后让两个指针相向移动；重复这一过程直到
两个指针相遇。
*/

/*
int main(){
	char sentence[N];
	printf("Enter a message: ");
	
	int i = 0;
	int ch;
	
	while((ch=getchar()) != '\n' && i<N - 1){
		sentence[i] = (char)ch;
		i++;
	}
	sentence[i] = '\0';
	
	printf("Reversal is:");
	
	for(int j = i - 1; j >= 0; j--){
		putchar(sentence[j]);
	}
	
	return 0;
}
*/

/*int main(){
	char sentence[N];
	printf("Enter a message: ");
	
	char *p = &sentence[0];
	char *s = p;
	char *end = p + N - 1;
	int ch;
	
	while((ch=getchar()) != '\n' && p < end){
		*p = (char)ch;
		p++;
	}
	*p = '\0';
	
	printf("Reversal is:");
	
	for(char *q = p - 1; q >=s; q--){
		putchar(*q);
	}
	
	return 0;
}
*/
int main(){
	char sentence[N];
	printf("Enter a message: ");
	
	int i=0, ch;
	
	while((ch=getchar()) != '\n' && i < N - 1){
		sentence[i++] = (char)ch;
	}

	
	printf("Reversal is:");
	
	for(char *p = sentence +i - 1; p >=sentence; p--){
		putchar(*p);
	}
	
	return 0;
}
/* 1. (a) 编写程序读一条消息，然后逆序打印出这条消息： 
Enter a message: Don't get mad, get even.
Reversal is: .neve teg ,dam teg t'noD 
提示：一次读取消息中的一个字符（用getchar函数），并且把这些字符存储在数组中，当数组
满了或者读到字符'\n'时停止读操作。 
(b) 修改上述程序，用指针代替整数来跟踪数组中的当前位置。
*/