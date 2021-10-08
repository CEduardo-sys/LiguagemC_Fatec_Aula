/*
	Tarefa 05 - Lista Comando If
	
	Exercicio 09. Receber um ano e se este ano for bissexto exibir na tela �Ano Bissexto�, sen�o exibir na tela �Ano N�o-Bissexto�. 
    Um ano � bissexto se for divis�vel por 4, mas n�o por 100. 
    Um ano tamb�m � bissexto se for divis�vel por 400.         
		
	// 1. Ler com aten��o o enunciado do exercico!!!
	
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
		printf("Ano n�o BISSEXTO");
	}
	
	return 0;
}
