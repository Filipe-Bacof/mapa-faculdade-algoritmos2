#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define linha 4
#define coluna 6

/* INSTRUÇÕES PARA EXECUTAR O CÓDIGO:
1- Abra o menu "Ferramentas" do Dev C++.
2- Selecione "Opções do compilador".
3- Marque a caixa que diz "Adicionar os seguintes comandos ao chamar o compilador:".
4- No campo abaixo, cole o seguinte comando (sem as aspas): "-std=c99".
5- Clique em "OK" e compile o código.
6- Para uma melhor experiência sugiro rodar o executável em tela cheia */

int i, j;
	float preenchervendas(float matriz[linha][coluna]);
	float exibirvendas(float matriz[linha][coluna]);
	float mediadevendas(float matriz[linha][coluna]);
int main (){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	float matriz[linha][coluna];
	int opcao;
	do{
		system("cls");
		printf("\n\t*****\n");
		printf("\n\t1 - Preencher as vendas do mês");
		printf("\n\t2 - Exibir as vendas do mês");
		printf("\n\t3 - Exibir a média das vendas do mês");
		printf("\n\t4 - Sair");
		printf("\n\tEscolha uma opção: ");
		scanf("%d", &opcao);
		switch(opcao){
			case 1:
				preenchervendas(matriz);
				break;
			case 2:
				exibirvendas(matriz);
				break;
			case 3:
				mediadevendas(matriz);
				break;
		}
	}
	while(opcao!=4);
	system("pause");
	return 0;
}
float preenchervendas(float matriz[linha][coluna]){
	int i, j;
	for(i=0; i<=4; i++){
		for(j=0; j<=6; j++){
			printf("semana %d, dia %d, digite o valor da venda: ", i+1, j+1);
			scanf("%f", &matriz[i][j]);
		}	
	}
}
float exibirvendas(float matriz[linha][coluna]){
	system("cls");
	int i, j;
	printf("Semana = S\tDia = D\n");
	for(i=0; i<=4; i++){
		for(j=0; j<=6; j++){
			printf("   [S %d][D %d] = %.2f", i+1, j+1, matriz[i][j]);
		}	
		printf("\n");
	}system("pause");
}


float mediadevendas(float matriz[linha][coluna]){
	system("cls");
	int i,j,k;
	k=0;
	float soma = 0;
	for(i=0; i<=4; i++){
		for(j=0; j<=6; j++){
			soma = soma + matriz[i][j];
			k++;
		}	
	}
	float media = soma/k;
	printf("\na media é: %.2f \n", media);
	system("pause");
}
