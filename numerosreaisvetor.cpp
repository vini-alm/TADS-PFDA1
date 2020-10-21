#include <stdio.h>

int main(void) {
	
	float numerosreais[10] = {0};
	
	printf("Insira 10 numeros reais:\n");
	
	for (int i = 0; i < 10; ++i)
		scanf ("%f", &numerosreais[i]);
		
	for (int i = 0; i < 10; ++i)	
	printf ("%.2f\n", numerosreais[i]);
		
		
		return 0;
}
