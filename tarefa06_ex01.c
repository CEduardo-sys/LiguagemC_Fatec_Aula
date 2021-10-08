/*
	Tarefa 06 - Comando If
	
	Instruções

	Receber a idade de uma pessoa,
	
	Classificar a pessoa conforme a sua idade:
	
	Bebê, Criança, Adolescente, Jovem, Adulto, Idoso e Matusalém.
	
	Se o usuário digitar uma idade menor do que zero, mostrar uma mensagem de erro e finalizar a aplicação.
         
		
	// 1. Ler com atenção o enunciado do exercico!!!
	
	// 2. Tests		
		
	Author: Carlos Eduardo	
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Qual sua idade? ");
	scanf("%i", &idade);
	
	if (idade >= 0 && idade < 2)
	{
		printf("\nBebê");
	}
	else if (idade >= 2 && idade <= 11)
	{
		printf("\nCriança");
	}	
	else if (idade >= 12 && idade <= 17)
	{
		printf("\nAdolescente");
	}
	else if (idade >= 18 && idade <= 24)
	{
		printf("\nJovem");
	}	
	else if (idade >= 25 && idade <= 59 )
	{
		printf("\nAdulto");
	}
	else if (idade >= 60 && idade <= 99)
	{
		printf("\nIdoso");
	}
	else if (idade > 100)
	{
		printf("\nMatusalém");
	}
	else
	{
		printf("Idade abaixo de 0 não existe.");
	}
	
	return 0;	
	
}
