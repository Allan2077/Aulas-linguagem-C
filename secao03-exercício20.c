#include <stdio.h>

int main (){

	int numero;

printf("Informe o numero entre 1 e 10 ")
scanf("%d", &numero);

while(numero < 1 || numero > 10){
	printf("Numero deve ser menor que 10");
	printf("Informe o numero");
	scanf("%d", &numero);
}

	for(i = 1; i <= 10;++i){
		numero = numero + i;
		printf("%d x %d = %d\n", numero);
	}
}


