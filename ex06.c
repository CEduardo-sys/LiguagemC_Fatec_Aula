/*
	Tarefa 02 - 6. Calcular o perímetro de uma circunferência recebendo seu raio. C = 2 *  * r (utilizar  = 3.14).
	
	// 1. Ler com atenção o enunciado do exercico!!!
	
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
	printf("Informe o raio da circunferência: ");
	scanf("%f", &raio);
		
	// Calc
	perimetro = 2 * 3.14 * raio;
	
	// Output
	printf("%.2f", perimetro);
	
	return 0;	
}
