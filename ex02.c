/*
	Tarefa 02 - Exercicio 2 Receber base e altura de um tri�ngulo e calcular sua �rea.
	
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
	float base, altura, area;
	
	// Input
	printf("Digite a base do Tri�gulo: ");
	scanf("%f", &base);
	
	printf("Digite a altura do Tri�ngulo: ");
	scanf("%f", &altura);
	
	// Calc
	area = (base * altura) / 2;
	
	// Output
	printf("\Area = %2.f", area);
	
	return 0;
	
}
