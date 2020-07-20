#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int x, num, soma=0;
  float media;
	
	for (x=0; x<50; x++){
		printf("Insira um numero: ");
		scanf("%d", &num);
		
		soma+=num;
    media=soma/50;
	}
		
		printf("\n A soma eh: %d e a media eh %.2f", soma, media);
	
	return 0;
}
