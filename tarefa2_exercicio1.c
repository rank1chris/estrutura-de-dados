#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i, j, pares = 0, impares = 0, MatrizA[10][7];

	srand(time(NULL)); // utilizei as funções srand e rand para gerar numeros aleatórios 

    for(i = 0; i < 10; i++){
        for(j = 0; j < 7; j++){   //gerador de números aleatórios
            MatrizA[i][j] = rand() % 100;
        }
    }

    for(i = 0; i < 10; i++){
        for(j = 0; j < 7; j++){
			printf("%d ", MatrizA[i][j]);
			if (MatrizA[i][j] % 2 == 0){ // printa a matriz e verifica se o número é par ou impar
				pares++;
			}
			else
				impares++;
		}
		printf("\n");
    }

	printf("\n");
	printf("Pares = %d", pares); //printa os pares e ímpares
	printf("\n");
	printf("Impares = %d", impares);

    float porcentagemp = pares / (float)70 * 100.0;      
    float porcentagemi = impares / (float)70 * 100.0;    // calcula a porcentagem dos pares e ímpares

	printf("\n");
	printf("Porcentagem dos pares = %0.2f", porcentagemp); //printa a porcentagem dos pares e ímpares
	printf("\n");
	printf("Porcentagem dos impares = %0.2f", porcentagemi);

	getchar();

    return 0;
}