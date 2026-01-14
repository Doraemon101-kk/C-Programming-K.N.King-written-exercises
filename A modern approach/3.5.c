#include <stdio.h>

int main()
{
	int a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34 ,a41, a42, a43, a44 ;
	printf("Enter the numbers from 1 to 16 in any order: ");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&a11, &a12, &a13, &a14, &a21, &a22, &a23, &a24, &a31, &a32, &a33, &a34 ,&a41, &a42, &a43, &a44);
	
	printf("%d\t%d\t%d\t%d\n",a11,a12,a13,a14);
	printf("%d\t%d\t%d\t%d\n",a21,a22,a23,a24);
	printf("%d\t%d\t%d\t%d\n",a31,a32,a33,a34);
	printf("%d\t%d\t%d\t%d\n",a41,a42,a43,a44);
	
	int r1 = a11 + a12 + a13 +a14;
	int r2 = a21 + a22 + a23 +a24;
	int r3 = a31 + a32 + a33 +a34;
	int r4 = a41 + a42 + a43 +a44;
	
	int c1 = a11 + a21 + a31 +a41;
	int c2 = a12 + a22 + a32 +a42;
	int c3 = a13 + a23 + a33 +a43;
	int c4 = a14 + a24 + a34 +a44;
	
	int d1 = a11 + a22 + a33 +a44;
	int d2 = a41 + a32 + a32 +a14;
	printf("Row sums: %d %d %d %d\n", r1, r2, r3, r4);
	printf("Column sums: %d %d %d %d\n", c1, c2, c3, c4);
	printf("Diagonal sums: %d, %d\n", d1, d2);
	
	return 0;
}