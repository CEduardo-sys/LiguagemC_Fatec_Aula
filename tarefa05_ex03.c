/*
	Tarefa 05 - Lista Comando If
	
	Exercicio 03. Receber numerador e denominador. 
    Calcular e mostrar o resultado da divisão, desde que possível (denominador diferente de zero).
    Se não for possível dividir, apenas escreva “não existe divisão por zero”.   
		
	// 1. Ler com atenção o enunciado do exercico!!!
	
	// 2. Tests		
		
	Author: Carlos Eduardo	
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float numerator, denominator, division;
	
	printf("Digite o numerador: ");
	scanf("%f", &numerator);
	
	printf("Digite o denominador: ");
	scanf("%f", &denominator);
	
	division = numerator / denominator;
	
	if(denominator != 0)
	{
		printf("\nResultado da divisão é %.2f", division);
	}
	else
	{
		printf("\nNão existe divisão por 0.");
	}
	
	return 0;
}	
