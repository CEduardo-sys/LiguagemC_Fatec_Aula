/*
	Tarefa 02 - 5. A velocidade média de um veículo em um percurso é dada através da distância percorrida pelo tempo,
ou seja, Vm = DS / Dt. Calcular a velocidade média do veículo em uma estrada recebendo esses dois dados do percurso.
	
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
	float distanciaPercorrida, tempo, velocidadeMedia;
	
	// Input
	printf("Qual a distância percorida do veículo? ");
	scanf("%f", &distanciaPercorrida);
	
	printf("Qual o tempo percorrido? ");
	scanf("%f", &tempo);
	
	// Calc
	velocidadeMedia = distanciaPercorrida / tempo;
	
	// Output
	printf("\nA velocidade média percorrida é = %.2f Km/h", velocidadeMedia);
	
	return 0;	
}
