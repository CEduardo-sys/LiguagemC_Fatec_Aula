/*
	Tarefa 02 - 10. Receber o ano de nascimento do usu�rio e dizer aproximadamente quantos dias de vida ele tem.

 
	// 1. Ler com aten��o o enunciado do exercico!!!
	
	// 2. Tests			
		
		
	Author: Carlos Eduardo	
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	// Var declarations
	int anoNascimento, anoAtual, diasVida;
	// Input
	printf("Informe seu ano de nascimento: ");
	scanf("%i", &anoNascimento);
	
	printf("Informe o ano atual: ");
	scanf("%i", &anoAtual);
	
	// Calc
	diasVida = (anoAtual - anoNascimento) * 365;
	
	//Output
	printf("\n Voc� est� vivo h� %i dias", diasVida);
		
	return 0;	
}
