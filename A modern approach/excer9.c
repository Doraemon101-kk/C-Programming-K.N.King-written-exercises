#include <stdio.h>
int check(int x, int y, int n){
	if(x >=0 && x < n && y >= 0 && y <n){
		return 1;
	}else{
		return 0;
	}
}

int gcd(int m ,int n){
	int t;
	while(n != 0){
		t = m % n;
		m = n;
		n = t;
	}
	
	return m;
}


int day_of_year(int month, int day, int year){
	
	if(month< 1 || month > 12){
		printf("Invalid");
		return -1;
	}
	int leap_year;
	leap_year = if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	
	int days = day;
	
	for(int i = 0; i < month - 1; i++){
		
		switch(i + 1){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			days += 31; break;
		case 4: case 6: case 9: case 11:
			days += 30; break;
		case 2:
			if(leap_year){
			days += 29;}else{
				days += 28;
			}break;
	}
	
	
	}
	printf("It is the %d day of the %d", days, year);
}