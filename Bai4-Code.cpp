#include <stdio.h>

int main() {
	int a, b;
	printf("Nhap a, b: ");
	scanf("%d%d", &a,&b);
	int x = a; 
	int y = b;
	while (b!=0){
		int r = a % b;
		a = b;
		b = r; 
	} 
	long long bcnn = (long long)(x*y)/a;
	printf("bcnn = %lld\n", bcnn);
	return 0; 
} 
