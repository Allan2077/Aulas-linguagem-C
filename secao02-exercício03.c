#include <stdio.h>

int main(){
	//Declarando variáveis
	int quantidade_minima, quantidade_maxima;
	float estoque_medio;

	//Entradas
	printf("informe a quantidade minima: ");
	scanf("%d", &quantidade_minima);

	printf("informe a quantidade maxima: ");
	scanf("%d", &quantidade_maxima);

	//Processamento
	estoque_medio = (quantidade_minima + quantidade_maxima) /2;

	//Saída
	printf("o estoque_medio é %.2f", estoque_medio);

	}

