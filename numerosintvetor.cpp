#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
	
	int numint[10];
	int i;
	int i2;
	int res;
	int num;
	
	printf("Insira 10 numeros inteiros\n");
	for (int i = 0; i < 10; i++)
		fflush(stdin);
	
		scanf ("%i", &num);
		
			res = pow (num, 2);
			numint[i]=res;

	for (int i2 = 0; i2 < 10; i2++)	
		printf ("%i = %i \n", i2, numint[i2]);
		
		
		return 0;
}
