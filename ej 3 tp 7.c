#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz [2][3],i=0,j=0,suma ,menor;
	
	for( i=0;i<2;i++){
		for(j=0; j<3;j++){
			
			
			printf("Segun la fila %d  Ingrese columna   %d:   ",i+1,j+1);
			scanf("%d",&matriz[i][j] );
			
		}
	}
	
	printf("Matriz multiplicada :\n");
	for( i=0;i<2;i++){
		for(j=0; j<3;j++){
			if(i==0){
				matriz[i][j]=matriz[i][j]*4;
			}
			if(j==2){
				matriz[i][j]=matriz[i][j]*3;
			}
			printf(" %d",matriz[i][j]);
			suma+=matriz[i][j];
			if(i==0&&j==0)
				menor=matriz[i][j];
			else{
					if(matriz[i][j]<menor)
						menor=matriz[i][j];
			}
		}
		printf("\n");
	}
	printf("Menor: %d\n",menor);
	printf("Suma: %d \n ",suma );
	
	system("pause");
	return 0;
}
