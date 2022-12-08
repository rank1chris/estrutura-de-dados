
/*

1) A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos.
A prefeitura deseja saber:  
a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$100,00.
O final da leitura de dados se dará com a entrada de um salário negativo. (Use o comando ENQUANTO-FAÇA)  

Ou seja,
1 - temos que colocar um loop infinito para puxar o input (while(1)) com um break para sair da statement caso o salário for menor do que 0
2 - Um "algoritmo" que divida o salario pela população
3 - Um "algoritmo" que divida o número de filhos pela população
4 - Um "algoritmo" que caso o salário for maior do que o anterior, sobrepõe-lo
5 - Um "algoritmo" que calcule a porcentagem de pessoas com o salário até 100 reais

*/ 

#include <stdio.h>
#include <locale.h> //library locale para acentuação em português

int main()
{
	setlocale(LC_ALL,"Portuguese");//Função da library <locale.h>, setando o idioma pra português
	int numero_de_filhos = 0, numero_de_salarios = 0, populacao = 0, pessoas_com_o_salario_ate_100 = 0;//variáveis int
	float media_do_salario = 0.0, media_de_filhos = 0.0, salario = 0.0, maior_salario = 0.0, porcentagem_dos_salarios_ate_100 = 0.0;//variáveis float

	while(1)//loop infinito
	{
		printf("Digite o número de filhos e o salário. Digite um numero menor do que 0 caso queira terminar a leitura dos arquivos.\n");//print para mostrar no terminal
		scanf("%d", &numero_de_filhos);//input numero de filhos
    	if(numero_de_filhos < 0)//verificar se o numero de filhos é menor que 0
			break;//caso for, break para sair do statement
 	   	scanf("%f", &salario);//input salário
 	   	populacao++;//incrementar a população
		if (salario > maior_salario) //verificar se o salário é o maior salário 
			maior_salario = salario;//caso for, o salário será sobreposto pelo maior salário
		if (salario <= 100.0) //verificar se o salário é até 100 
			pessoas_com_o_salario_ate_100++;//se for, incrementa o numero de pessoas com o salario até 100
		media_do_salario += salario;//incrementa a quantidade da media do salario, também poderia usar media_do_salario = media_do_salario + salario mas é ineficiente
		media_de_filhos += numero_de_filhos;//incrementa a quantidade da média de filhos, mesma coisa do de cima, poderia utilizar o = mas é ineficiente
	}

	//Coloquei os algoritmos dentro da função printf

	printf("A media do salário da população é de: %.2f reais\n", media_do_salario = media_do_salario / populacao);//Print do algoritmo que divide o salário pela população 
	printf("A média do numero de filhos por pessoa é de: %.2f filhos\n", media_de_filhos = media_de_filhos / populacao);//Print do algoritmo que divide o número de filhos pela população
	printf("O maior salário é de: %.2f reais\n", maior_salario);//Print do maior salário
	printf("O Percentual de pessoas com o salário até 100 reais é de: %.2f%%\n", porcentagem_dos_salarios_ate_100 = (pessoas_com_o_salario_ate_100 / (float)populacao) * 100.0);//Print do algoritmo que calcule a porcentagem de pessoas com o salário até 100 reais
}