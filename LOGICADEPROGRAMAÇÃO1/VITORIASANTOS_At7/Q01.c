#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float nota_a, nota_b, media;
	
	printf("Insira a primeira nota: ");
	scanf("%f", &nota_a);
	printf("\nInsira a segunda nota: ");
	scanf("%f", &nota_b);
		media=(nota_a+nota_b)/2;
			(media>=6)?printf("Aluno aprovado"):printf("Aluno reprovado");
	
	return 0;
}
