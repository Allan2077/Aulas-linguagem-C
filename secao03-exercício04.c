#include<stdio.h>

int main(){
	//Declarando variáveis
	int num1, num2, soma;

	//Entradas
	printf("informe o primeiro numero: ");
	scanf("%d" ,&num1);
	printf("informe o segundo numero: ");
	scanf("%d" ,&num2);

	//Processamento
	soma = (num1 + num2);

	//Saída
	printf("A soma é a %d", soma);
}
