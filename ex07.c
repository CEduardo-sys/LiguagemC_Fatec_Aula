/*
	Tarefa 02 - 7. Uma empresa paga R$ 10.00 por hora normal trabalhada e R$ 15.00 por hora extra.
Receber o total de horas normais e o total de horas extras trabalhadas por um empregado no mês e calcular o salário dele.
	
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
	float horaNormal, horaExtra, salario;
	
	// Input
	printf("Informe horas normais trabalhada: ");
	scanf("%f", &horaNormal);
	
	printf("Informe horas extras trabalhada: ");
	scanf("%f", &horaExtra);
	// Calc
	salario = (horaNormal * 10) + (horaExtra * 15) ;
	
   // Output
	printf("\nSalario a receber será %.2f reias", salario);
	
	return 0;
}

