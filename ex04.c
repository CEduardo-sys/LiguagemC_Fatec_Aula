/*
	Tarefa 02 - Exercicio 4. Receber uma temperatura em Fahrenheits e convertê-la para Celsius.
Celsius = (Fahrenheit - 32) / 1.8.
	
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
	float temperaturaFahrenheits, celsius;
	
	// Input
	printf("Informe a temperatura: ");
	scanf("%f", &temperaturaFahrenheits);
	
	// Calc
	celsius = (temperaturaFahrenheits - 32) / 1.8;
	
	// Output
	printf("%.2fº celsius", celsius);	
	



	return 0;	
}
