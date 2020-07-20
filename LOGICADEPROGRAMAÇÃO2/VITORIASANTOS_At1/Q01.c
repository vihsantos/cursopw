#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float nota1, nota2, nota3, media;
	
	printf("Insira a primeira nota: ");
	scanf("%f", &nota1);
	printf("\nInsira a segunda nota: ");
	scanf("%f", &nota2);
	printf("\nInsira a terceira nota: ");
	scanf("%f", &nota3);
	
	media= (nota1+nota2+nota3)/3;
	
	if (media==10){
		printf("Aprovado com maestria");
	}
	else if (media>=7){
		printf("Aprovado");
	}
	else{
		printf("Reprovado");
	}
	
	return 0;
}
