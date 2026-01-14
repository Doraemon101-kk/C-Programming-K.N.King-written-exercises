/*
表5-6 简化的蒲福风级 
速率（海里／小时） 描  述 
小于1 Calm（无风） 
1～3 Light air（轻风） 
4～27 Breeze（微风） 
28～47 Gale（大风） 
48～63 Storm（暴风） 
大于63 Hurricane（飓风） 
  编写一个程序，要求用户输入风速（海里/小时），然后显示相应的描述。
  
*/

#include <stdio.h>

int main()
{
	int v;
	printf("Enter the wind speed(miles / hour): ");
	scanf("%d", &v);
	
	if(v < 1){
		printf("Calm");
	}else if(v <= 3){
		printf("Light air");
	}else if(v <= 27){
		printf("Breeze");
	}else if(v <= 47){
		printf("Gale");
	}else if(v <= 63){
		printf("Storm");
	}else{
		printf("Hurricane");
	}
	
	return 0;
}