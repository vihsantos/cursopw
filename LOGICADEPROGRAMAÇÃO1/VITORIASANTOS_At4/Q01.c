#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float v, result;
	
	printf("Insira a velocidade do veiculo: \n");
	scanf("%f", &v);
	
		result= v/1.61;
		
	printf("O velocidade media por milhas/h eh igual a: %f", result);
	
	return 0;
}
