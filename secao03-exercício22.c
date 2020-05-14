#include <stdio.h>

int main(){

	//Variáveis
	int numero;

	//Entrada
	printf("Informe o numero entre 1 e 10: ");
	scanf("%d", &numero);

	//Processamento
	while(numero < 1 || numero > 10){
		printf("Informe um numero entre 1 e 10: ");
		scanf("%d", &numero);
	}
	for(int i = 1; i <= 10; i++){
		printf("%d x %d = %d\n", numero, i, (numero * i));
	}

}
