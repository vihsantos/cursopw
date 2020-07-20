#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float prod1, prod2;
	
	printf("Informe o valor do produto 1: ");
	scanf("%f", &prod1);
	printf("Informe o valor do produto 2: ");
	scanf("%f", &prod2);	
	
	if(prod1<prod2){
		printf("Compre o produto 1");
	}
	else{
		printf("Compre o produto 2");
	}
	
	return 0;
}
