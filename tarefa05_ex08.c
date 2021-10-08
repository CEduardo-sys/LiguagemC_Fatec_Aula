/*
	Tarefa 05 - Lista Comando If
	
	Exercicio 08. Voc� assina um plano de 50 minutos no celular que custa R$ 50.00 por m�s, independente de utiliz�-los integralmente ou n�o. 
    Por�m, se voc� utilizar mais do que 50 minutos, � cobrado mais R$ 1.50 por cada minuto que passar dos 50 do seu plano. 
    Receber quantos minutos foram gastos no m�s e calcular o valor da conta.        
		
	// 1. Ler com aten��o o enunciado do exercico!!!
	
	// 2. Tests		
		
	Author: Carlos Eduardo	
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float minute, plan;	
		
	printf("Quantos minutos foram gastos no m�s? ");
	scanf("%f", &minute);	
	
	if(minute <= 50)
	{
		printf("Pagar� R$50,00");
	}
	
	else
	{		
		plan = ((minute - 50) * 1.50) + 50;
		printf("\nSer� cobrado uma taxa de 1.50 por minuto aidiconal: Total de R$ %.2f", plan);	
	}
	
	return 0;		
}
