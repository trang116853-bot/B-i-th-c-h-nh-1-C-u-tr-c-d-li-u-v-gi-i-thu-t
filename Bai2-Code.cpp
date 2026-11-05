#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	if (n<2){
		printf("Khong nguyen to\n"); 
	} 
	else{
		int i = 2;
		int nto =1;
		while (i <= sqrt(n)) {
			if (n % i == 0){
				printf("Khong nguyen to");
				nto=0;
				break; 
			} 
			i++; 
		}
		if(nto==1){
			printf("Co nguyen to"); 
		} 
	} 
	return 0; 
} 
