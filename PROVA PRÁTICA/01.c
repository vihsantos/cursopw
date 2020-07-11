#include <stdio.h>
#include <stdlib.h>

int main (){

	int num, x, maior=0;

	for(x=0;x<100;x++){
		printf("Insira um numero: ");
		scanf("%d", &num);
			if(num>maior){
				maior=num;
			}
	}
	printf("O maior numero eh %d", maior);
 
	return 0;

}
