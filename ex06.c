/*
	Tarefa 02 - 6. Calcular o per�metro de uma circunfer�ncia recebendo seu raio. C = 2 *  * r (utilizar  = 3.14).
	
	// 1. Ler com aten��o o enunciado do exercico!!!
	
	// 2. Tests			
		
		
	Author: Carlos Eduardo	
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	// Var declarations
	float raio, perimetro;
	
	// Input
	printf("Informe o raio da circunfer�ncia: ");
	scanf("%f", &raio);
		
	// Calc
	perimetro = 2 * 3.14 * raio;
	
	// Output
	printf("%.2f", perimetro);
	
	return 0;	
}
