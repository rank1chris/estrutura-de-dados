#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i, j, MatrizA[6][6], soma = 0;

	srand(time(NULL)); // utilizei as funções srand e rand para gerar numeros aleatórios 

    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){   //gerador de números aleatórios
            MatrizA[i][j] = rand() % 100;
        }
    }

    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
			printf("%d ", MatrizA[i][j]);
			if(i == j){
                soma += MatrizA[i][j]; //verifica se a posição "i" e a posição "j" são iguais, e caso for, adiciona o número int dessa posição na variável soma
            }
		}
		printf("\n");
    }
        
	printf("Soma da diagonal principal = %d", soma);

	getchar();

    return 0;
}