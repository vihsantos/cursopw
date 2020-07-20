#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int veta[5], vetb[5], vetc[5], x, num;
	
		for(x=0; x<5; x++){
		printf("\nInsira um valor para o Vetor A: ");
		scanf("%d", &veta[x]);
	}
		for(x=0; x<5; x++){
		printf("\n   Insira um valor para o Vetor B: ");
		scanf("%d", &vetb[x]);
	}
		for(x=0; x<5; x++){
		vetc[x]=veta[x]+vetb[x];
	}
		for(x=0; x<5; x++){
		printf(" %d ", vetc[x]);
	}
	
	return 0;
}
