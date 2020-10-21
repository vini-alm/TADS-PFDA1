#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int i, i2, num, res, vet[10];
	for (i=0; i<10; i++)
	{
		fflush(stdin);
		printf("Insira o numero %i: ", i+1);
		scanf("%d", &num);
		res = pow (num, 2);
		vet[i]=res;
	}
	for(i2=0; i2<10; i2++)
	{
		printf("\nQuadrado %d = %d", i2+1, vet[i2]);
	}
	
	return 0;		
			
}
