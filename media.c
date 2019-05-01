#include <stdio.h>
#include <stdlib.h>

void valorMedio(int *v, int a);

int main(){

	int *v, n, i;

	printf("Introduzca el número de elementos: ");
	scanf("%d", &n);

	printf("Introduzca los elementos:\n");

	v=(int*)malloc(n*sizeof(int));

	for(i=0;i<n;i++){

		scanf("%d", &*(v+i));

	}

	valorMedio(v, n);

	free(v);	

	return 0;

}
void valorMedio(int *v, int a){

	int i, may=0;
	float media;

	for(i=0;i<a;i++){

		may+=v[i];

	}

	media=(float)may/(float)a;
	printf("La media es: %f\n", media);
	free(v);

	return;
}
