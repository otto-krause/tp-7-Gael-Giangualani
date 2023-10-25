#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	int habitantes[20][6]={0},total=0,acumulador=0,j,i;
	float prome[20]={0};
	for(i=0;i<20;i++){
		for(j=0;j<6;j++){
			
			printf("Segun el piso %d ingrese personas en el departamento %d \n",i+1,j+1);
			scanf("%d",&habitantes[i][j]);
			
			
			acumulador+=habitantes[i][j];
			for(total=0;total<6;total++){
				if(i==total){
					prome[total]=prome[total]+habitantes[i][j];
				}
			}
		}
	}
	
	printf(" Personas totales:  %d \n",acumulador);
	for(i=0;i<3;i++){
		printf("Promedio de piso %d: %.2f \n",i+1,prome[i]/6);
	}
	system("pause");
	return 0;
}
