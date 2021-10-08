/*
	Tarefa 05 - Lista Comando If
	
	Exercicio 07. Implemente um programa que calcule aumento de sal�rio no ano corrente. 
    Se o sal�rio for de at� R$ 1000.00 deve ser calculado o novo sal�rio com aumento de 5%,
	para um sal�rio maior que R$ 1000.00 o aumento � de 7%.       
		
	// 1. Ler com aten��o o enunciado do exercico!!!
	
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
		printf("\nSal�rio teve um aumento de 5 por cento e foi para %.2f", bonus);
	}
	else
	{
		bonus = salary + (salary * 0.07);
		printf("\nSal�rio teve um aumento de 7 por cento e foi para %.2f", bonus);
	}
	
	
	return 0;	
}
