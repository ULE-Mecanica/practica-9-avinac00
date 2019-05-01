#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int *mat, n, m, i, j, sol, sum=0;

	printf("Introduzca en número de filas: ");
	scanf("%d", &n);
	printf("Introduzca en número de columnas: ");
	scanf("%d", &m);

	mat=(int*)malloc(n*m*sizeof(int));

	printf("Introduzca los elementos de la matriz de izquierda a derecha y de arriba a abajo: ");

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){

			scanf("%d", mat+n*i+j);
			sum+=*(mat+n*i+j);
			
		}
	}

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){

			printf("%d\t", *(mat+n*i+j));
	
		}

		printf("\n");
	}

	printf("La suma de los elementos de la matriz es: %d\n", sum);
	free(mat);

	return 0;

}
