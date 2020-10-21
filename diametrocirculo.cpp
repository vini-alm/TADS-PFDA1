#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main () {

float diametro, raio, perimetro;

printf ("Este programa tem como objetivo calcular o perimetro de um circulo");

printf ("\n\nDigite o diametro do circulo:");
scanf ("%f.2", &diametro );

raio = diametro / 2;
perimetro = 2 * 3.14 * raio; 

printf ("\n\nO raio deste circulo eh %.2f", raio);


printf ("\n\nO perimetro desse circulo eh %.2f", perimetro);


return 0;


}
