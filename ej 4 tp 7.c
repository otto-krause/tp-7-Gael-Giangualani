#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	int r[3]={0}, rep[3][12]={0},total=0, coche,linea,recau;
	while(1){
		printf("Ingrese coche, linea y recaudacion (ingrese un valor por debajo  a 1 para terminar  ): ");
		scanf("%d",&coche);
		
		if(coche<1){
			break;
		}
		
		scanf("%d %d",&linea,&recau);
		r[linea-1]+=recau;
		rep[linea-1][coche-1]+=recau;
		total+=recau;
	}
	for(int i=0;i<3;i++){
		printf("Recaudacion total de la linea %d: %d\n",i+1,r[i]);
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<12;j++){
			printf("Recaudacion total para el coche %d de la linea %d: %d",j+1,i+1,rep[i][j]);
		}
	}
	printf("Recaudacion total: %d\n",total);
	
	system("pause");
	
	
	return 0;
}
	
