#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int num, x, vet[10], maior=0, pos;
	
	for(x=0;x<10;x++){
		
		printf("\nInforme um numero: ");
		scanf("%d",&vet[x]);
	}
	
	for (x=0; x<10; x++){
		
		if(vet[x]>maior){
			maior=vet[x];
			pos=x+1;
		}
	}
	printf("O maior numero eh %d e sua posicao eh %d", maior, pos);
	
	return 0;
}
