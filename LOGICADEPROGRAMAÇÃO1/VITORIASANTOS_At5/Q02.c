#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float posi, posa, v, t;
	
	printf("Informe a posicao inicial: ");
	scanf("%f", &posi);
	printf("\nInforme a velocidade: ");
	scanf("%f", &v);
	printf("\nInforme o tempo decorrido: ");
	scanf("%f", &t);
		posa= posi+v*t;
	printf("\nA posicao atual eh: %.2f", posa);
	
	return 0;
}
