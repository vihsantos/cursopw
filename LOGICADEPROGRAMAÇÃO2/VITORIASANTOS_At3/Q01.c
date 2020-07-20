#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int vet[10], x, num, i=0;
	
	for(x=0;x<10; x++){
		printf("Informe um numero: \n");
		scanf("%d", &num);
			vet[x]=num;
		
	}
	
	for(x=0;x<10;x++){
		if(vet[x]%2==0){
			printf("Os numeros impares sao %d \n", vet[x]);
		}
	}
	
	return 0;
}
