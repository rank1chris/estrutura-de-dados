#include <stdio.h>

void inverter(int *x, int *y){
	int v;

	printf("Invertendo...\n");

	v = *x;
	*x = *y;
	*y = v;
}

int main (){
    int x = 0;
    int y = 0;
	int v = 0;

	printf("Escreva o X (inteiro):");
	scanf("%i", &x);
	printf("Escreva o y (inteiro):");
	scanf("%i", &y);

	printf("X: %i\n", x);
	printf("Y: %i\n", y);

	inverter(&x, &y);

	printf("X: %i\n", x);
	printf("Y: %i\n", y);

	return 0;
}

