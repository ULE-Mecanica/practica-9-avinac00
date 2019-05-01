#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int *mat, n, m, i, j;

	printf("Introduzca valor para las filas: ");
	scanf("%d", &n);
	printf("Introduzca valor para las columnas: ");
	scanf("%d", &m);

	mat=(int*)malloc(n*m*sizeof(int));
	srand(time(NULL));

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){

			*(mat+n*i+j)=1+rand()%(101-1);

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
