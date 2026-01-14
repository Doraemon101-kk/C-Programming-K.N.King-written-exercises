#include <stdio.h>
#include <ctype.h>

#define MAX_WORD_LEN 21
#define MAX_NUM 31
#define MAX_LEN 500

int main()
{
	char word[MAX_NUM][MAX_WORD_LEN];
	char sentence[MAX_LEN];
	char t = '\0';
	int len = 0;
	
	while (len < MAX_LEN - 1){
		char ch = getchar();
		if(ch == '.' || ch == '?' || ch == '!'){
			t = ch;
			break;
		}
		sentence[len++] = ch;
	}
	sentence[len] = '\0';
	
	int word_count = 0;
	int start = 0;
	
	
	for(int i = 0; i <= len; i++){
		//检测到空格，单词结尾
		if(i == len|| sentence[i] == ' '){
			
			if(i > start && word_count < MAX_NUM){
				//从s 到 i
				int actual_len = i - start;//计算实际长度
				int wlen = (actual_len > MAX_WORD_LEN)? MAX_WORD_LEN: actual_len;
				//只复制这部分，word length方便末尾加\0
				for(int j = 0; j <wlen; j++){
					word[word_count][j] = sentence[start+ j];//存储
				}//存储
				
				word[word_count][wlen] = '\0';//存储\0
				
				word_count ++;
			}
			
			start = i+1;//遍历下一个单词
		}
	}

	
	printf("Reversal of sentence:");
	
	for(int k = word_count -1; k >= 0; k--){
		printf(" %s", word[k]);//一维打印一个单词
	}
	printf("%c\n", t);
	
	return 0;
}