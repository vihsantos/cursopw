#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int num, x, maior1=0, maior2=0, aux=0;
	
	for(x=0;x<3;x++){
		printf("Insira um valor: ");
		scanf("%d",&num);
		
			if(num>maior1){
				if(maior1>maior2){
					maior2=maior1;	
				}
				maior1=num;
			}
			if((maior1>maior2)&&(num!=maior1)){
				maior2=num;
			}	
	}
	
	printf("Os maiores numeros sao: %d e %d", maior1, maior2);

	return 0;
}
