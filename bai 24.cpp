#include<stdio.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	int c = a;
	a = b;
	b = c;
	printf("ater swapping, a = %d, b = %d", a, b);
	return 0; 
}
