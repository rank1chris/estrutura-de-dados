#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
	int i, j, MatrizA[15], MatrizB[15], soma = 0;

	srand(time(NULL)); // utilizei as funções srand e rand para gerar numeros aleatórios (srand = start random number generation)

    for(i = 0; i < 15; i++){
            MatrizA[i] = rand() % 100; //gera o vetor 
    }

	printf("Matriz A = ");

    for(i = 0; i < 15; i++){
		printf("%d ", MatrizA[i]); //printa a matriz a
    }

	printf("\n");

	memcpy(MatrizB, MatrizA, sizeof(MatrizB)); //copia a matriz a pra matriz b

    for(i = 0; i < 15; i++){
		MatrizB[i] *= MatrizB[i]; //multiplica a matriz b
	}

	printf("Matriz B = ");

    for(i = 0; i < 15; i++){
		printf("%d ", MatrizB[i]); //printa a matriz b
    }

	getchar();

    return 0;
}