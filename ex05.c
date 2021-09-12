/*
	Tarefa 02 - 5. A velocidade m�dia de um ve�culo em um percurso � dada atrav�s da dist�ncia percorrida pelo tempo,
ou seja, Vm = DS / Dt. Calcular a velocidade m�dia do ve�culo em uma estrada recebendo esses dois dados do percurso.
	
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
	float distanciaPercorrida, tempo, velocidadeMedia;
	
	// Input
	printf("Qual a dist�ncia percorida do ve�culo? ");
	scanf("%f", &distanciaPercorrida);
	
	printf("Qual o tempo percorrido? ");
	scanf("%f", &tempo);
	
	// Calc
	velocidadeMedia = distanciaPercorrida / tempo;
	
	// Output
	printf("\nA velocidade m�dia percorrida � = %.2f Km/h", velocidadeMedia);
	
	return 0;	
}
