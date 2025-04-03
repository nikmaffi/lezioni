#include <stdio.h>	// printf, scanf
#include <math.h>	// sqrt, pow, sin, cos, ...
#include <stdlib.h>	// system

int main() {
	int a, b, c;

	printf("Inserire il numero A: ");
	scanf("%d", &a);

	printf("Inserire il numero B: ");
	scanf("%d", &b);

	c = a + b;

	printf("\nC = A + B = %d + %d = %d\n", a, b, c);

	return 0;
}
