#include <stdio.h>
//std = standard (Padrão)
//io = output/input (Entrada/Saída)

int main(){
	int num1, num2, soma, multiplicacao;


	//Entradas
	printf("informe o primeiro número: ");
	scanf("%d",&num1);

	printf("informe o segundo número: ");
	scanf("%d", &num2);

	//Processamento
	soma = num1 + num2;
	multiplicacao = soma * num1;

	//Saída
	printf("O resultado da multiplicacao é %d", multiplicacao);




}

