#include <stdio.h>
int main(){
	//Declarando variáveis
	int metros, centimetros;

	//Entrada
	printf("informe o valor em metros: ");
	scanf("%d", &metros);

	//processamento
	centimetros = (metros * 100);

	//Saída
	printf("%d metros em centimetros é %d", metros, centimetros);
}
