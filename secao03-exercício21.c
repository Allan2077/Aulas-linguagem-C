#include <stdio.h>

int main(){
	//Variáveis
	int n, maior = 0;

	//Entrada
	printf("Informe um numero: ");
	scanf("%d", &n);

	//Proocessamento
	while(n != 0){
		if(n > maior){
			maior = n;
		}
		//Entrada
		printf("Informe um numero: ");
		scanf("%d", &n);
	}
	printf("O maior numero é %d", maior);
}

