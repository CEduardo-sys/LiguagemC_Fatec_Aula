/*
	Tarefa 05 - Lista Comando If
	
	Exercicio 08. Você assina um plano de 50 minutos no celular que custa R$ 50.00 por mês, independente de utilizá-los integralmente ou não. 
    Porém, se você utilizar mais do que 50 minutos, é cobrado mais R$ 1.50 por cada minuto que passar dos 50 do seu plano. 
    Receber quantos minutos foram gastos no mês e calcular o valor da conta.        
		
	// 1. Ler com atenção o enunciado do exercico!!!
	
	// 2. Tests		
		
	Author: Carlos Eduardo	
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float minute, plan;	
		
	printf("Quantos minutos foram gastos no mês? ");
	scanf("%f", &minute);	
	
	if(minute <= 50)
	{
		printf("Pagará R$50,00");
	}
	
	else
	{		
		plan = ((minute - 50) * 1.50) + 50;
		printf("\nSerá cobrado uma taxa de 1.50 por minuto aidiconal: Total de R$ %.2f", plan);	
	}
	
	return 0;		
}
