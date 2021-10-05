/*
	Tarefa 05 - Lista Comando If
	
	Exercicio 05. Receber dois números e mostrar o maior deles.     
		
	// 1. Ler com atenção o enunciado do exercico!!!
	
	// 2. Tests		
		
	Author: Carlos Eduardo	
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

	float number01, number02;
	
	printf("Enter a number01: ");
	scanf("%f", &number01);

	printf("Enter a number02: ");
	scanf("%f", &number02);
	
	if(number01 > number02)
	{
		printf("\nNumber01 >> %.2f is greater than number02 >> %.2f ", number01, number02);
	}
	else
	{
		printf("\nNumber02 >> %.2f is greater than number01 >> %.2f ", number02, number01);
	}
	return 0;	
}
