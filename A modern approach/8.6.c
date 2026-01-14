#include <stdio.h>
#define N 100

int main(){
	char message[N];
	printf("Enter message: ");
	
	int len = 0;
	for(int i = 0; i< N; i++){
		message[i] = getchar();
		if(message[i] == '\n')break;
		
		if(message[i] <= 'z' && message[i] >='a'){
			message[i] -= 32;
		}
		switch(message[i]){
		case'A':
			message[i] = '4'; break;
		case'B':
			message[i] = '8'; break;
		case'E':
			message[i] = '3'; break;
		case'I':
			message[i] = '1'; break;
		case'O':
			message[i] = '0'; break;
		case'S':
			message[i] = '5'; break;
			
			default:break;
		}
		
		len++;
	}
	
	for(int i = 0; i < len; i++)
	printf("%c", message[i]);
	
	for(int i = 0; i < 10; i++){
        printf("!");
    }
    printf("\n");
	
	return 0;
}