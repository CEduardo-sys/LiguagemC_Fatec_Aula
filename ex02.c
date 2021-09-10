/*
	Tarefa 02 - Exercicio 2 Receber base e altura de um triângulo e calcular sua área.
	
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
	float base, altura, area;
	
	// Input
	printf("Digite a base do Triâgulo: ");
	scanf("%f", &base);
	
	printf("Digite a altura do Triângulo: ");
	scanf("%f", &altura);
	
	// Calc
	area = (base * altura) / 2;
	
	// Output
	printf("\Area = %2.f", area);
	
	return 0;
	
}
