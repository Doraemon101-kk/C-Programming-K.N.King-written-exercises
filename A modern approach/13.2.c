#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

int main(void)
{
	char reminders[MAX_REMIND][MSG_LEN + 20];
	char time_str[20], msg_str[MSG_LEN+1];
	
	int i, j, num_remind = 0;
	int m, d, h, min;
	
	
	for(;;){
		if(num_remind == MAX_REMIND){
			printf("-- No space left --\n");
			break;
		}
		
		printf("Enter mm/dd hh:mm and reminder:");
		int a = scanf("%d/%d %d:%d", &m, &d, &h, &min);
		
		if(m == 0)break;
		
		if(a != 4){
		read_line(msg_str, MSG_LEN);
		continue;
		}
	
		
		if(m < 1 || m > 12|| d < 0|| d> 31
		   ||h < 0 || h > 23|| min < 0|| min > 59){
			printf("Invalid input");
			read_line(msg_str, MSG_LEN);
			continue;
		}
		
		sprintf(time_str, "%02d/%02d %02d:%02d", m, d, h, min);
		read_line(msg_str, MSG_LEN);
		
		for(i = 0; i < num_remind; i++){
			if(strcmp(time_str, reminders[i]) < 0)
			break;
			//判断插入日期是否比现有的大，因为有空格可以判断空和1
		}
		for(j = num_remind; j > i; j--){
			strcpy(reminders[j], reminders[j- 1]);	
		}//插入到j 位元素
		strcpy(reminders[i], time_str);
		strcat(reminders[i], msg_str);
			
			num_remind++;//更新计数
	}
	printf("\nMonth/Day Time Reminder\n");
	for(i = 0; i < num_remind; i++){
		printf(" %s\n", reminders[i]);
	}
	
	return 0;
}

int read_line(char str[], int n){
	int ch, i = 0;
	
	while((ch = getchar())!= '\n'){
		if(i < n){
			str[i ++] = ch;
		}
	}
	str[i] ='\0';
		
	return i;
}