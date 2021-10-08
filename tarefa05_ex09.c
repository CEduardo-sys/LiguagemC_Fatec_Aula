/*
	Tarefa 05 - Lista Comando If
	
	Exercicio 09. Receber um ano e se este ano for bissexto exibir na tela “Ano Bissexto”, senão exibir na tela “Ano Não-Bissexto”. 
    Um ano é bissexto se for divisível por 4, mas não por 100. 
    Um ano também é bissexto se for divisível por 400.         
		
	// 1. Ler com atenção o enunciado do exercico!!!
	
	// 2. Tests		
		
	Author: Carlos Eduardo	
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int year;
	
	printf("Enter a year: ");
	scanf("%i", &year);
	
	if (year % 4 == 0 || year % 100 != 0 && year % 400 == 0)
	{
		printf("\nAno Bissexto");
	}
	else
	{
		printf("Ano não BISSEXTO");
	}
	
	return 0;
}
