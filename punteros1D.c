#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int *v, n, i, menor;

	printf("Introduzca el número de elementos: ");
	scanf("%d", &n);

	printf("Introduzca los elementos que componen el vector: ");

	v=(int*)malloc(n*sizeof(int));

	if(v==NULL){

		exit(-1);
	}else{

		for(i=0;i<n;i++){

			scanf("%d", &*(v+i));

		}

		for(i=0;i<n;i++){

			menor=v[0];

			if(menor>v[i]){

				menor=v[i];
			}
		}

			printf("El menor es: %d\n", menor);
			free(v);
	}

	return 0;

}
