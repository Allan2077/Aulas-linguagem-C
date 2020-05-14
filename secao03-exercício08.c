#include <stdio.h>

int main(){
	//Variáveis
	int numero, a, b;

	//Entradas
	printf("Informe o numero; ");
	scanf("%d", &numero);

	//Processamento
	if(numero > 0){
		a = numero;
		printf("O %d numero é positivo.", numero);
	}else{
		b = numero;
		printf("O %d numero é negativo.", numero);
	}


}
