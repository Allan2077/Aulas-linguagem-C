#include<stdio.h>

int main (){
	//Variáveis
	float indice;

	//Entrada
	printf("Informe o índice de poluição: ");
	scanf("%f", &indice);

	//Processamento

	if(indice >= 0.3 && indice < 0.4){
		printf("Grupo 1 suspendam as atividades ");
	}else if(indice >= 0.4 && indice < 0.5){
		printf("Grupo 1 e 2 suspendam as atividades");
	}else if(indice >= 0.5){
		printf("Todos os grupos devem suspender as atividades ");
	}
	}
