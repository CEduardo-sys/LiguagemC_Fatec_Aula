/*
	Tarefa 05 - Lista Comando If
	
	Exercicio 03. Receber numerador e denominador. 
    Calcular e mostrar o resultado da divis�o, desde que poss�vel (denominador diferente de zero).
    Se n�o for poss�vel dividir, apenas escreva �n�o existe divis�o por zero�.   
		
	// 1. Ler com aten��o o enunciado do exercico!!!
	
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
		printf("\nResultado da divis�o � %.2f", division);
	}
	else
	{
		printf("\nN�o existe divis�o por 0.");
	}
	
	return 0;
}	
