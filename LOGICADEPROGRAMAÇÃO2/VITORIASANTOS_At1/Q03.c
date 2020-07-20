#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float salarioini, salariofinal, aumento;
	
	printf("Informe o salario do funcionario: ");
	scanf("%f", &salarioini);
	
	if (salarioini<=280.00){
		aumento=salarioini*0.2;
		salariofinal=salarioini+aumento;
		printf("\nO salario era %.2f, o aumento foi de 20 porcento com o seu valor de %.2f. \nO salario final ficou por %.2f", salarioini, aumento, salariofinal);
	}
	else if ((salarioini>280.00)&&(salarioini<=700.00)){
		aumento=salarioini*0.15;
		salariofinal=salarioini+aumento;
		printf("\nO salario era %.2f, o aumento foi de 15 porcento com o seu valor de %.2f. \nO salario final ficou por %.2f", salarioini, aumento, salariofinal);
	}
	else if((salarioini>700.00)&&(salarioini<=1500.00)){
		aumento=salarioini*0.1;
		salariofinal=salarioini+aumento;
		printf("\nO salario era %.2f, o aumento foi de 10 porcento com o valor de %.2f. \nO salario final ficou por %.2f", salarioini, aumento, salariofinal);
	}
	else {
		aumento=salarioini*0.05;
		salariofinal=salarioini+aumento;
		printf("\nO salario era %.2f, o aumento foi de 5 porcento com o valor de %.2f. \nO salario final ficou por %.2f", salarioini, aumento, salariofinal);
	}
	
	return 0;
}
