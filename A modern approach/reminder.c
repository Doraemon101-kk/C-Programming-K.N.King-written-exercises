#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

int main(void)
{
	char reminders[MAX_REMIND][MSG_LEN + 3];
	char day_str[3], msg_str[MSG_LEN+1];
	
	int day, i, j, num_remind = 0;
	
			printf("-- No space left --\n");
			break;
		}
		
		printf("Enter day and reminder:");
		scanf("%2d", &day);
		
		if(day == 0)breakMSG_LEN);continue;
		
		sprintf(day_str, "%2d", day);
		read_line(msg_str, MSG_LEN);
		for(j = num_remind; j > i; j--){
		strcat(reminders[i], daystr);
			
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