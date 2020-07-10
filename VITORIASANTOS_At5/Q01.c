#include <stdio.h>
#include <stdlib.h>

int main (){
	float F, C;
	
	printf("Insira a temperatura em Fahrenheit: ");
	scanf("%f", &F);
		C = (F - 32) / 1.8;
	printf("\nA temperatura em Celsius eh: %.2f", C);
	
	return 0;
}
