#include <stdio.h>

void funcao(int *x, int *y){
	int variavel1 = 0, variavel2 = 0; 
	if (*x > *y){
		variavel1 = *x;
		variavel2 = *y;
	}
	else if (*x < *y){
		variavel1 = *y;
		variavel2 = *x;
	}
	else{
		return 0;
	}
	printf("Variavel 1 (maior): %i\n", variavel1);
	printf("Variavel 2 (menor): %i", variavel2);
}

int main (){
    int x = 0;
    int y = 0;

	printf("Escreva o X (inteiro):");
	scanf("%i", &x);
	printf("Escreva o y (inteiro):");
	scanf("%i", &y);

	printf("\n");

	funcao(&x, &y);

	return 0;
}

