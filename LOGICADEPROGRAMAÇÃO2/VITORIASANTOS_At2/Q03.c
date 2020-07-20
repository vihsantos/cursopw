#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int num, soma=0;
	
	do {
		printf("\nDigite um numero: ");
		scanf("%d", &num);
		
		if(num>0){
			soma+=num;
		}
		
	}
	while (num>0);
	
	printf("A soma dos numeros digitados pelo usuario eh %d", soma);
	
	return 0;
}
