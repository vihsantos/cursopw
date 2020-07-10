#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float RCQ, c, q;
	
	printf("Insira a circunferencia da cintura do individuo: ");
	scanf("%f", &c);
	
	printf("\nInsira a circunferencia do quadril do individuo: ");
	scanf("%f", &q);
	
		RCQ= c/q;
		
	printf("O RQC eh igual a: %.2f", RCQ);
	
	return 0;
}
