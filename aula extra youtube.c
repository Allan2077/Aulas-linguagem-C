#include <stdio.h>

int main(int * argc, char * argv[]){

	int opcao, valor;

	printf("Conversor Bases Numericas \n ");
	printf("\t1: decimal para hexadecimal \n");
	printf("\t2: hexadecimal para decimal \n");
	printf("\n\nInforme a opcao: ");
	scanf("%d", &opcao);
	getchar();

	if(opcao == 1){
		printf("informe o valor em decimal");
		scanf("%d", &valor);
		getchar();
		printf("%d em hexadecimal é: %x\n", valor,valor);
	}
	else if(opcao ==2){
		printf("\nInforme o valor em hexadecimal: ");
		scanf("%x", &valor);
		getchar();
		printf("%x em decimal é: %d\n",valor,valor);
	}
	else printf("\n sua opcao é invalida. ");
}
