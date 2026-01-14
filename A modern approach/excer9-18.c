#include <stdio.h>
int gcd(int m, int n){
	if(n == 0){
		return m;
	}else{
		gcd(n, m % n);
	}
}