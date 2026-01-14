/* 在美国的某个州，单身居民需要缴纳表5-7中列出的所得税。 
表5-7 美国某州单身居民个人所得税缴纳标准 
收入（美元） 税  金 
未超过750 收入的1% 
750～2250 7.50美元加上超出750美元部分的2% 
2250～3750 37.50美元加上超出2250美元部分的3% 
3750～5250 82.50美元加上超出3750美元部分的4% 
5250～7000 142.50美元加上超出5250美元部分的5% 
超过7000 230.00美元加上超出7000美元部分的6% 
  编写一个程序，要求用户输入应纳税所得额，然后显示税金。
  
  */
  
#include <stdio.h>

int main()
{
	double income, tax;
	
	printf("Enter the income: ");
	scanf("%f", &income);
	
	if(income < 750){
		tax = .01 * income;
	}else if(income < 2250){
		income -= 750;
		tax = .02 * income + 7.50f;
	}else if(income < 3750){
		income -= 2250;
		tax = .03* income + 37.50f;
	}else if(income < 5250){
		income -= 3750;
		tax = .04* income + 82.50f;
	}else if(income < 7000){
		income -= 5250;
		tax = .05* income + 142.50f;
	}else {
		income -=7000;
		tax = .06*income +230.00f;
	}
	
	printf("The tax you should pay is %lf", tax);
	
	return 0;
}