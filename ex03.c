/*
	Tarefa 02 - Exercicio 3 Receber um comprimento em metros e convert�-lo para cent�metros.
	
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
	float metros = 0, centimetros = 0;
	
	// Input
	printf("Deseja converter metros para cent�metros? \n");
	printf("Informe o comprimento (METROS): ");
	scanf("%f", &metros);
	
	// Calc
	centimetros = metros * 100;
	
	// Output
	printf("%.2f cm", centimetros);	
	
	return 0;
}
