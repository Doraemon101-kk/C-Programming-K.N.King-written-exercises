/*17. 修改第12章的编程题2，使其包含如下函数： 
bool is_palindrome(const char *message); 
如果message 指向的字符串是回文，函数返回true。 
*//*
2. (a) 编写程序读一条消息，然后检查这条消息是否是回文（消息中的字母从左往右读和从右往左读是
一样的）：
Enter a message: He lived as a devil, eh?
Palindrome 
Enter a message: Madam, I am Adam.
Not a palindrome 
忽略所有不是字母的字符。用整型变量来跟踪数组中的位置。 
(b) 修改上述程序，使用指针代替整数来跟踪数组中的位置。

*/

#include <stdio.h>
#include <ctype.h>
#define N 1000
/*
int main(){
	char sentence[N];
	printf("Enter a message: ");
	
	int i = 0;
	int ch;
	while((ch = getchar())!= '\n' && i < N - 1){
		sentence[i++] = (char)ch;
	
	}
	sentence[i] = '\0';
	
	char letters[N];
	int len = 0;
	
	
	for(int j = 0; j< i; j++ ){
		if(isalpha((unsigned char) sentence[j])){
			letters[len++] = (char) tolower((unsigned char) sentence[j]);
		}
	}
	
	int is_palindrome = 1;
	for(int left = 0, right = len - 1; left < right; left ++, right --){
		if(letters[left] != letters[right]){
			is_palindrome = 0;
			
			break;
		}
	}
	
	if(is_palindrome)printf("Palindrome");
	else printf("Not a palindrome");
	
	return 0;
}
*/

/*
int main(){
	char sentence[N];
	printf("Enter a message: ");
	
	char*p = sentence;
	char *end = sentence + N -1;
	int ch;
	while((ch = getchar()) != '\n' && p < end){
		*p++ = (char)ch;
	}
	*p = '\0';
	

	char letters[N];
	char *q = letters;
	
	for(char *r = sentence;r < p; r++){
		if(isalpha ((unsigned char) *r)){
			*q++=(char) tolower((unsigned char )*r);
		}
	}
	
	char *left =  letters;
	char *right = q - 1;
	int is_palindrome = 1;
	
	while(left < right){
		if(* left!= *right)
		{
			is_palindrome = 0;
			break;
		}
		left++;
		right--;
	}
	
	
	if(is_palindrome)printf("Palindrome");
	else printf("Not a palindrome");
	
	
	return 0;
}
*/
int main(){
	char sentence[N];
	printf("Enter a message: ");
    
    int i =0;
    int ch;
    
	while((ch = getchar()) != '\n' && i < N - 1){
		sentence[i] = (char)ch;
	}
	

	char letters[N];
	
	int len = 0;
	for(int j = 0; j< i; j++ ){
		if(isalpha((unsigned char) sentence[j])){
			letters[len++] = (char) tolower((unsigned char) sentence[j]);
		}
	}
	
	char *left =  letters;
	char *right = letters + len - 1;
	int is_palindrome = 1;
	
	while(left < right){
		if(* left++ != *right--)
		{
			is_palindrome = 0;
			break;
		}
	}
	
	
	if(is_palindrome)printf("Palindrome");
	else printf("Not a palindrome");
	
	
	return 0;
}