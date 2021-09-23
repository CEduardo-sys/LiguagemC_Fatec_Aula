/*
	Tarefa 04 - Fa�a um programa que receba a quantidade de horas trabalhadas e o valor da hora trabalhada de um funcion�rio.
	
	Se o funcion�rio tiver um sal�rio base menor que R$ 1500,00, dar uma bonifica��o de 15%, caso contr�rio dar uma bonifica��o de 5%.

	Mostrar o sal�rio base, bonifica��o e o sal�rio final.

	O sal�rio final � igual ao sal�rio base mais o valor da bonifica��o.
	
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
	float horasTrabalhada, valorDaHoraTrabalhada, salarioBase, bonificacao, salarioFinal;
		
	// Input
	printf("Informe as horas trabalhadas: ");
	scanf("%f", &horasTrabalhada);
	
	printf("Digite o valor da hora trabalhada: ");
	scanf("%f", &valorDaHoraTrabalhada);
	
	// Calc
	salarioBase = horasTrabalhada * valorDaHoraTrabalhada;
	
	
	if(salarioBase < 1500){
		bonificacao = salarioBase * 0.15;
		printf("\n A Bonifica��o � 15%%, o valor � R$ %.2f", bonificacao);
		
	} else {
		bonificacao = salarioBase * 0.05;
		printf("\n A bonifica��o � 5%%, o valor � R$ %.2f", bonificacao);
	}
	
	salarioFinal = salarioBase + bonificacao;
	
	// Output
	printf("\n Salario base � de R$ %.2f", salarioBase);
	printf("\n Sal�rio final � de R$ %.2f", salarioFinal);
	
	
	
	return 0;	
}
