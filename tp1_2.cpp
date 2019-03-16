#include <stdio.h>

int 	cuadrado(int);
void	cuadradoRef(int*, int);
void 	mostrar(int*);
void	invertir(int*, int*);
void	ordenar(int*,int*);

int main()
{
	int n= 3,c, v1, v2;
	int *p = &c;
	
	printf("cuadrado de %d: %d  \n", n,cuadrado(n));
	cuadradoRef(p, n);
	printf("(ref) cuadrado de %d: %d  \n", n, *p);

	mostrar(&n);

	printf("\nIngrese un numero entero: ");
	scanf("%i", &v1);
	printf("\nIngrese un numero entero: ");
	scanf("%i", &v2);

	ordenar(&v1, &v2);
	
	printf("\nPar ordenado: %d  %d ", v1, v2);

	


	return 0;
}


//========================================

int 	cuadrado(int a){
	return a*a;
}

//========================================

void	cuadradoRef(int *c, int a){
	*c = a*a;
}


//========================================

void 	mostrar(int *a){
	printf("\nDireccion: %p \nContenido: %d ", a, *a);
}

//========================================

void	invertir(int *a, int*b){
	int aux;
	aux = *a;
	*a 	= *b;
	*b	= aux;
}

//========================================

void	ordenar(int *a, int *b){
	if(*a > *b)	invertir(a,b);
}


