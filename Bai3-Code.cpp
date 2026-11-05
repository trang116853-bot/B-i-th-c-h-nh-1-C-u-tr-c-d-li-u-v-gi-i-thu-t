#include <stdio.h>

int main() {
	int n;
	printf("Nhap N: ");
	scanf("%d", &n);
	int A[n+1];
	for (int k= 1; k<= n; k++) {
		printf("Nhap A[%d]: ",k);
		scanf("%d", &A[k]); 
	}
	int Max = A[1];
	int i = 2;
	while (i <= n){
		if (A[i] > Max){
			Max = A[i]; 
		} 
		i++; 
	} 
	printf("Max = %d\n", Max);
	return 0; 
} 
