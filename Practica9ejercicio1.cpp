#include <stdio.h>
/*
Este programa es para determinar cu�nto ahorrar� una persona en un a�o y cuanto ahorro por cada mes
*/
#include <stdio.h>

 int main(){

	#define MAX 12
	float ahorros=0, deposito=0;
	
	int meses=1;
	
	for (meses=1; meses<MAX; meses++) {
		
			printf("\n\n\nPara el mes numero %d", meses);
			printf(". Cuanto dinero deposito al final del mes? "); 
			scanf("%f", &deposito);
			ahorros+=deposito;
			printf("\nLos ahorros de este mes son %f ", ahorros);
				
			}
			
			printf("\n Sus ahorros de un a�o son: %f", ahorros);
		
	
	return 8;	
}
