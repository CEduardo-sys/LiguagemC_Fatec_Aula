/*
	Tarefa 05 - Lista Comando If
	
	Exercicio 01. Receber um número e informar se ele é negativo ou não é negativo. 
		
	// 1. Ler com atenção o enunciado do exercico!!!
	
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

