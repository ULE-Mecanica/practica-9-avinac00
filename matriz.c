#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int *mat, i, j, c=0;

	srand(time(NULL));

	mat=(int*)malloc(10*10*sizeof(int));

	for(i=0;i<10;i++){
		for(j=0;j<10;j++){

			c++;

			*(mat+10*i+j)=c;
			
			
		}
	}

	for(i=0;i<10;i++){
		for(j=0;j<10;j++){

			printf("%d\t", *(mat+10*i+j));
	
		}

		printf("\n");
	}

	free(mat);

	return 0;

}
