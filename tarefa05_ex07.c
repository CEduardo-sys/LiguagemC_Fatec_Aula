/*
	Tarefa 05 - Lista Comando If
	
	Exercicio 07. Implemente um programa que calcule aumento de salário no ano corrente. 
    Se o salário for de até R$ 1000.00 deve ser calculado o novo salário com aumento de 5%,
	para um salário maior que R$ 1000.00 o aumento é de 7%.       
		
	// 1. Ler com atenção o enunciado do exercico!!!
	
	// 2. Tests		
		
	Author: Carlos Eduardo	
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float salary, bonus;
	
	printf("Enter a salary: ");
	scanf("%f", &salary);
	
	if (salary <= 1000)
	{
		bonus = salary + (salary * 0.05);
		printf("\nSalário teve um aumento de 5 por cento e foi para %.2f", bonus);
	}
	else
	{
		bonus = salary + (salary * 0.07);
		printf("\nSalário teve um aumento de 7 por cento e foi para %.2f", bonus);
	}
	
	
	return 0;	
}
