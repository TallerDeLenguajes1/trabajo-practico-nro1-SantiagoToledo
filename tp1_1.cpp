#include <stdio.h>

int main()
{
	int a = 15; 
	int *punt = &a;
	
	printf("(1) Contenido del puntero: %i\n", *punt);
	printf("(2) Direccion d memoria almaceanada por el puntero: %p\n", punt);
	printf("(3) Direccion de memoria de la variable: %p\n", &a);
	printf("(4) Direccion de memoria del puntero: %p\n", &punt);
	printf("(5) Tamanio de memoria: %d\n", sizeof(a));

	/* 
	Un puntero es una variable que contiene la direccion de memoria de
	un dato, en este caso de la variable "a". Por lo que muestran lo
	mismo en pantalla.

	El punto 4 muesta la direccion del puntero en si mismo. No la direccion 
	de la variable que apunta por lo tanto es distinto a lo que muestran los
	puntos anteriores.
	*/

	return 0;
}