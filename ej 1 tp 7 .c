#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz [2][3],i=0,j=0;
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			
			printf("Segun la fila %d  Ingrese columna   %d:   ",i+1,j+1);
			scanf("%d",&matriz[i][j] );
			
		}
		
		
	}
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d ",matriz[i][j]);
			
		}
		printf("\n ");
		
	}	
	system("pause");
	
	return 0;
}
