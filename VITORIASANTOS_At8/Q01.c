#include <stdio.h>
#include <stdlib.h>

int main (){
	int num;
	
	printf ("Insira um numero: ");
	scanf("%d", &num);
		((num%3==0)&(num%7==0))?printf("\nNumero eh divisivel por 3 e 7"):printf("\nNumero n eh divisivel por 3 e 7");
	
	return 0;
}
