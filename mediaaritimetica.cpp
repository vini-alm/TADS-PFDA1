#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	float nota1, nota2, media;

	printf ("Este programa tem como objetivo calcular a media aritmetica de duas notas\n\n\n\n");


	
	printf("Digite a primeira nota:");
	scanf("%f", &nota1);
	
	
	printf("\n\nDigite a segunda nota:");
	scanf ("%f", &nota2);
	
	media = (nota1 + nota2) / 2; 
	
	printf("\n\nA media aritmetica entre as notas %.2f e %.2f eh %.2f", nota1, nota2, media);
	
	
	
	
	
	
}
