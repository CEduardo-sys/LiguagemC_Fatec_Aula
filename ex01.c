/*
	Tarefa 02 - Exercicio 1 Receber dois valores e calcular sua m�dia aritm�tica.
	
	// 1. Ler com aten��o o enunciado do exercico!!!
	
	// 2. Tests	
		Test 1 - Se num1 = 10 e num2 = 20, average = 15.00
		Test 2 - Se num1 = 3 e num2 = 4, average = 3.50
		Test 3 - Se num1 = -3 e num2 = -4, average = -3.50
		
		
	Author: Carlos Eduardo	
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	// 3 . Var declarations
	// Tudo que � digitado � guardado em vari�vel: Dois num
	// Tudo que � calculado � guardado em uma vari�vel: Uma vari�vel
	// Quais s�o os tipos da vari�veis ? int ou float? -> float
	float num1, num2, average;
	
	// 4. Input
	printf("Digite um numero real: ");
	scanf("%f", &num1);
	
	printf("Digite um numero real: ");
	scanf("%f", &num2);
	
	// 5. Calc
	average = (num1 + num2) / 2;
	
	// 6. Output
	printf("\nMedia = %.2f", average);
	
	// 7. Run tests
	

	
	
	return 0;
}
