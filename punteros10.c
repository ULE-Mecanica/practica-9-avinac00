#include <stdio.h>
#include <stdlib.h>

int main(){

	int *mat, n, m, i, j;

	printf("Introduzca valor para las filas: ");
	scanf("%d", &n);
	printf("Introduzca valor para las columnas: ");
	scanf("%d", &m);

	mat=(int*)malloc(n*m*sizeof(int));

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){

			*(mat+n*i+j)=(i==j);
		}
	}

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){

			printf("%d\t",*(mat+n*i+j));	

		}

		printf("\n");
	}

return 0;

}

