/*
	Tarefa 05 - Lista Comando If
	
	Exercicio 01. Receber um n�mero e informar se ele � negativo ou n�o � negativo. 
		
	// 1. Ler com aten��o o enunciado do exercico!!!
	
	// 2. Tests		
		
	Author: Carlos Eduardo	
*/



#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float number;
	
	printf("Enter a number: ");
	scanf("%f", &number);
	
	
	
	if (number >= 0)
	{
		
		printf("\nPositivo!!!");		
	}
	else
	{
		printf("\nNegativo!!!");	
	}
			
	return 0;
}

