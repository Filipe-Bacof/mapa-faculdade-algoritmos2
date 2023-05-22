#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* INSTRUÇÕES PARA EXECUTAR O CÓDIGO:
1- Abra o menu "Ferramentas" do Dev C++.
2- Selecione "Opções do compilador".
3- Marque a caixa que diz "Adicionar os seguintes comandos ao chamar o compilador:".
4- No campo abaixo, cole o seguinte comando (sem as aspas): "-std=c99".
5- Clique em "OK" e compile o código. */
int main(){
	setlocale(LC_ALL, "Portuguese");
	const char numRA[]={"19178365"};
	int vetorRA[9];
	for(int i=0; i<9; i++){
		vetorRA[i]=numRA[i]-'0';
	}int i=0;
	while(i<8){
		printf ("\nO caractrere numero %d do RA é: %d\n", i+1, vetorRA[i]);
		i++;
	}printf ("\n");
	system("pause");
	return 0;
}
