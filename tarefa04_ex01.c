/*
	Tarefa 04 - Faça um programa que receba a quantidade de horas trabalhadas e o valor da hora trabalhada de um funcionário.
	
	Se o funcionário tiver um salário base menor que R$ 1500,00, dar uma bonificação de 15%, caso contrário dar uma bonificação de 5%.

	Mostrar o salário base, bonificação e o salário final.

	O salário final é igual ao salário base mais o valor da bonificação.
	
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
		printf("\n A Bonificação é 15%%, o valor é R$ %.2f", bonificacao);
		
	} else {
		bonificacao = salarioBase * 0.05;
		printf("\n A bonificação é 5%%, o valor é R$ %.2f", bonificacao);
	}
	
	salarioFinal = salarioBase + bonificacao;
	
	// Output
	printf("\n Salario base é de R$ %.2f", salarioBase);
	printf("\n Salário final é de R$ %.2f", salarioFinal);
	
	
	
	return 0;	
}
