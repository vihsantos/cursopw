#include <stdio.h>
#include <stdlib.h>

int main (){
	int x, idade, conta=0, contb=0, contc=0, contd=0, conte=0;
	
	for(x=0; x<8; x++){
		printf("Informe a sua idade: ");
		scanf("%d", &idade);
		
		if((idade>=1)&(idade<=15)){
			conta++;
		}
		else if ((idade>=16)&(idade<=30)){
			contb++;
		}
		else if((idade>=31)&(idade<=45)){
			contc++;
		}
		else if((idade>=46)&(idade<=60)){
			contd++;
		}
		else {
			conte++;
		}
	}
	
	printf("A quantidade de pessoas com a idade entre 1 a 15 anos eh %d \n A quantidade de pessoas com a idade entre 16 a 30 anos eh %d \n A quantidade de pessoas com a idade entre 31 a 45 eh %d \n A quantidade de pessoas com idade entre 46 a 60 eh %d \n A quantidade de pessoas maiores de 61 anos eh %d", conta, contb, contc, contd, conte);
		
	return 0;
}
