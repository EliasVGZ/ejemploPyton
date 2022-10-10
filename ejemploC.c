#include<stdio.h>
#include<conio.h>

int funcionSuma(int a, int b)
	return a + b;



void main() {
	int n1, n2, suma;
	
	printf("introduzca primer numero")
	scanf("%d" , &n1);
	printf(" Introduzca segundo numero:");
	scanf ("%d" , &n2);
	
	suma = funcionSuma(n1,n2);
	printf("\n La suma es: %d", suma)
}
	
	int funcionSuma(int a, int b){
	return a + b;
	
}