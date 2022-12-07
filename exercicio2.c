/*

2) Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. 
Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:  

- 1,2,3,4 = voto para os respectivos candidatos;
- 5 = voto nulo;
- 6 = voto em branco;

Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:

- total de votos para cada candidato;
- total de votos nulos;
- total de votos em branco;

Como finalizador do conjunto de votos, tem-se o valor 0.

*/
		
#include <stdio.h>
#include <stdlib.h>//stdlib pra função system("cls")
#include <locale.h>//library locale para acentuação em português 

int main()
{
	setlocale(LC_ALL,"Portuguese");//Função da library <locale.h>, setando o idioma pra português
	int voto = 1, um = 0, dois = 0, tres = 0, quatro = 0, cinco = 0, seis = 0;//variáveis

	while (voto != 0)//para quando voto = 0
	{
		printf("insira o seu voto, considerando: \n1 = candidato 1, \n2 = candidato 2, \n3 = candidato 3, \n4 = candidato 4, \n5 = voto branco, \n6 = voto nulo.");
		printf("\n\n");//quebra duas linhas
		scanf("%d", &voto);//entrada de dados
		system("cls");//limpa o terminal
		printf("próximo voto, em caso de encerrar a sessão selecione 0 para contabilizar");
		//era melhor switch mas não sei se o professor explicou isso em aula
		if (voto == 1)
			um++;
		if (voto == 2)
			dois++;
		if (voto == 3)
			tres++;
		if (voto == 4)
			quatro++;
		if (voto == 5)
			cinco++;
		if (voto == 6)
			seis++;
	}

	system("cls");

	printf("%d votos para o primeiro candidato\n", um);
	printf("%d votos para o segundo candidato\n", dois);
	printf("%d votos para o terceiro candidato\n", tres);
	printf("%d votos para o quarto candidato\n", quatro);
	printf("%d votos nulos\n", cinco);
	printf("%d votos brancos\n", seis);
	printf("Pressione alguma tecla pra continuar\n");
	getchar(); //pra não fechar o terminal instantaneamente caso executar pelo .exe
}
