#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float peso, h, IMC;
	
	printf("Insira o peso: ");
	scanf("%f", &peso);
	
	printf("\nInsira a altura: ");
	scanf("%f", &h);
		
		IMC=peso/(h*h);
		
	printf("O Indice de Massa Corporea eh: %f", IMC);
	
	return 0;
}
