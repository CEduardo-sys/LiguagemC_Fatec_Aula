/*
	Tarefa 05 - Lista Comando If
	
	Exercicio 04. Calcular a média de um aluno em um semestre com duas provas, onde M = (P1 + P2) / 2. 
    Se a média for maior ou igual a 5 escreva “aprovado”, senão calcule e mostre quanto faltou para atingir 5.    
		
	// 1. Ler com atenção o enunciado do exercico!!!
	
	// 2. Tests		
		
	Author: Carlos Eduardo	
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float test01, test02, average, missed;
	
	printf("Enter test 01: ");
	scanf("%f", &test01);
	
	printf("Enter test 02: ");
	scanf("%f", &test02); 
	
	average = (test01 + test02) / 2;
	
	if(average >= 5)
	{
		printf("\nAproved!!!");
	}
	else
	{
		missed = average - 5;
		printf("\nMissed %.2f to be approved.", missed);
	}
	
	return 0;	
}

