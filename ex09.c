/*
	Tarefa 02 - 9. Na Dinamarca todo cidad�o tem acesso � educa��o e sa�de de qualidade atrav�s do pagamento de um imposto �nico
sobre o sal�rio, de 37%. Receber o sal�rio bruto (valor do sal�rio sem descontos) de um trabalhador dinamarqu�s
e calcular o sal�rio l�quido (valor do sal�rio ap�s os descontos).

 
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
	float salarioBruto, salarioLiquido;
	
	// Input
	printf("Informe o salario bruto: R$");
	scanf("%f", &salarioBruto);
	
	// Calc
	salarioLiquido = (salarioBruto * 0.63);
	
	// Output
	printf("\nAp�s o desconto o sal�rio l�quido � R$ %.2f ", salarioLiquido);
	
	return 0;	
}

