#include <stdio.h>
	int main(){
	
	unsigned int mn=0, my=0;
	float numero=0;



		printf("\n Escribe el numero que desees clasificar: "); 
		scanf("%f", &numero);
		numero<=0 ? mn++ : my++;
		
	

	
		if (numero<=0) {
			printf("\n El numero es menor o igual a cero");
			printf("\n\n Las cantidades iguales o menores a cero son: %o", mn);
			printf("\n\n Las cantidades mayores a cero son: %o", my);
		}

		else {
			printf("\n El numero es mayor a cero"); 
			printf("\n\n Las cantidades mayores a cero son: %o", my);
			printf("\n\n Las cantidades iguales o menores a cero son: %o", mn);
		}
		
	printf("\n\n\nLas cantidades menores o iguales a cero totales son: %o", mn);
	printf("\n\nLas cantidades mayores a cero totales son: %o", my);

	return 0;
}
