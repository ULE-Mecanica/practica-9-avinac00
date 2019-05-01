#include <stdio.h>
#include <stdlib.h>

void inicializa(int *mat,int a);
void imprime(int *mat,int a);

int main(){

	int *mat, n;

	printf("introduzca orden de matriz: "); 
	scanf("%d", &n);

	mat=(int*)malloc(n*n*sizeof(int));

	inicializa(mat, n);
	imprime(mat, n);

	return 0;
}

void inicializa(int *mat,int a){

	int i, j;

	for(i=0;i<a;i++){
		for(j=0;j<a;j++){

			*(mat+a*i+j)=(i==j);

		}
	}


	return;
}
void imprime(int *mat,int a){

	int i, j;

	for(i=0;i<a;i++){
		for(j=0;j<a;j++){

			printf("%d\t", *(mat+a*i+j));

		}

		printf("\n");

	}

	return;
}
