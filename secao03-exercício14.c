#include<stdio.h>

int main(){
	//Variáveis
	int numero;
	//Entrada
	printf("Informe o numero: ");
	scanf("%d", &numero);

	//Processamento
	if(numero % 2 == 0){
		if(numero > 0){
		printf("numero par %d é positvo.", numero);
		}else{
			printf("O numero %d é par e negativo ", numero);
		}
		}else{
			if(numero > 0){
				printf("O numero %d é ímpar e positivo.", numero);
			}else{
				printf("O numero %d é impar e negativo. ", numero);

			}
		}








}
