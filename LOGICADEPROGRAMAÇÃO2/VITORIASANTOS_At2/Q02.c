#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int x, num, contp=0, conti=0;
	
	for (x=1; x<10; x++){
		
		printf("Informe um numero: ");
		scanf("%d", &num);
		
		if(num%2==0){
			contp++;
		}
		else{
			conti++;
		}
	}
	
		printf("\n A quantidade de numeros impares eh %d e a de numeros pares eh %d", conti, contp);
	
	return 0;
}
