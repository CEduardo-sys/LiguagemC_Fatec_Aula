/*
	Tarefa 05 - Lista Comando If
	
	Exercicio 06. Receber dois números e os apresente em ordem crescente. 
    Utilize apenas a estrutura de decisão if, ou seja, sem o opcional else.      
		
	// 1. Ler com atenção o enunciado do exercico!!!
	
	// 2. Tests		
		
	Author: Carlos Eduardo	
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float number01, number02, bigger, smaller;
	
	printf("Enter a number 01: ");
	scanf("%f", &number01);
	
	printf("Enter a number 02: ");
	scanf("%f", &number02);
	
	bigger = number01;
	smaller = number02;
	
	if(bigger < smaller)
	{
		smaller = number02;
		bigger = number01;
	}
	
	printf("\n%.2f %.2f", smaller, bigger);	
	
	return 0;	
}
