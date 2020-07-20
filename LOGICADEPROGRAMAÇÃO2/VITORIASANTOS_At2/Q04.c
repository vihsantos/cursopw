#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int idade, media, soma=0, cont=0;
	
	do{
		printf("\nInforme a idade do funcionario: ");
		scanf("%d", &idade);
		
		if(idade>=18){
			soma+=idade;
			cont++;
		}
	}
	while (idade>=18);
	
		media=soma/cont;
		printf("A media da idade eh: %d", media);
	
	return 0;
}
