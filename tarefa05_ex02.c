/*
	Tarefa 05 - Lista Comando If
	
	Exercicio 02. Receber um n�mero e verificar se ele esta na faixa de 0 � 9. 
	
	Se sim, mostre uma mensagem afirmativa, caso contr�rio mostre uma mensagem indicando
	que o n�mero n�o se encontra na faixa.  
		
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
	
	if(number >=0 && number <= 9)
	{
		printf("\nValor informado est� entre 0 e 9.");
	}
	else
	{
		printf("\nValor informado n�o est� dentro de 0 a 9.");
	}	
	
	return 0;
}

