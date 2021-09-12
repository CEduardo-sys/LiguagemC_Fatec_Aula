/*
	Tarefa 02 - 9. Na Dinamarca todo cidadão tem acesso à educação e saúde de qualidade através do pagamento de um imposto único
sobre o salário, de 37%. Receber o salário bruto (valor do salário sem descontos) de um trabalhador dinamarquês
e calcular o salário líquido (valor do salário após os descontos).

 
	// 1. Ler com atenção o enunciado do exercico!!!
	
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
	printf("\nApós o desconto o salário líquido é R$ %.2f ", salarioLiquido);
	
	return 0;	
}

