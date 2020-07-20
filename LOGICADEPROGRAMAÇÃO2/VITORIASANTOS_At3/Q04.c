#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int x, y, num, mat[3][3];
	
		for (x=0; x<3; x++){
			for (y=0; y<3; y++){
				printf("\nInsira um valor para sua matriz: ");
				scanf("%d", &mat[x][y]);
			}
		}
		
		printf("\nInsira um valor qualquer: ");
		scanf("%d", &num);
		
		for (x=0; x<3; x++){
			for (y=0; y<3; y++){
		
				if(mat[x][y]==num){
					printf("\n numero encontrado");
					break;
				}
			}
		}
	
	
	return 0;
}
