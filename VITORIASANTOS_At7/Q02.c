#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float nota_a, nota_b, media, notafinal;
	
	printf("Insira a primeira nota: ");
	scanf("%f", &nota_a);
	printf("\nInsira a segunda nota: ");
	scanf("%f", &nota_b);
		media=(nota_a+nota_b)/2;
			(media>=6)?printf("Aluno aprovado"):(notafinal=10-media);printf("Aluno reprovado, precisa tirar %.2f pontos na final para passar", notafinal);
	
	return 0;
}
