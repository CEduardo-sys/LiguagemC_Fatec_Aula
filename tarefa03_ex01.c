/*
	Tarefa 03 - Churrasco
	
	Instru��es
	Fa�a um programa que receba:
	
	Quantidade de homens.
	Quantidade de mulheres.
	Quantidade de crian�as.
	Quantidade de horas de dura��o de um churrasco.
	
	
	Calcular e mostrar uma lista de compra de 10 itens para um churrasco, considerando a quantidade de pessoas e a dura��o do churrasco.
	A lista de compras dever� constar:
	   - Quantidade de cada item (se for o caso, como quantidade de p�o, latas de refrigerante, pacotes, etc..
	   - Quilos de cada item (se for o caso), como carne, lingui�a, etc...
	
	A lista de compra dever� ter o total a ser comprado.
		
	// 1. Ler com aten��o o enunciado do exercico!!!
	
	// 2. Tests	
		
		
		
	Author: Carlos Eduardo	
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
		
		
	int quantHomens, quantMulheres, quantCriancas, quantHoras, totPessoas;
	int pao, lataCerveja, lataRefrigerante, pacoteQueijo;
	float carnePicanha, carneContra, carneMaminha, carneAsaFrango, carneFraldinha, linguica, horasChurrasco, carvao;
		
	printf("Informe a quantidade de homens: ");
	scanf("%i", &quantHomens);
		
	printf("Informe a quantidae de mulheres: ");
	scanf("%i", &quantMulheres);
		
	printf("Informe a quantidade de crian�as: ");
	scanf("%i", &quantCriancas);
		
	printf("Informe a dura��o do churrasco em horas: ");
	scanf("%i", &quantHoras);
	
	
	// Total de Pessoas	
	totPessoas = quantHomens + quantMulheres + quantCriancas;
	
	
	// Itens por Quilos	
	carnePicanha = (quantHomens * 0.100) + (quantMulheres * 0.100) + (quantCriancas * 0.100) * (quantHoras / 2);	
	carneContra = (quantHomens * 0.100) + (quantMulheres * 0.050) + (quantCriancas * 0.100) * (quantHoras / 2);	
	carneMaminha = (quantHomens * 0.100) + (quantMulheres * 0.050) * (quantHoras / 2);	
	carneAsaFrango = (quantHomens * 0.100) + (quantMulheres * 0.050) * (quantHoras / 2);	
	carneFraldinha = (quantHomens * 0.100) + (quantMulheres * 0.050) * (quantHoras / 2);
	
	// carv�o 3Kg a cada 3 a 4 horas.
	carvao =  quantHoras * 1;
	
	
	linguica = (quantHomens * 0.200) + (quantMulheres * 0.100) + (quantCriancas * 0.050) * (quantHoras / 2);
	
	
	// Quantidade de latas de refrigerantes
	lataRefrigerante = 3 * ((quantHomens + quantMulheres + quantCriancas) / 2) * (quantHoras / 2);	
	
	
	// Itens que contem a quantidade
	pao = 2 * (quantHomens + quantMulheres + quantCriancas);	
	pacoteQueijo = 1 * (quantHomens + quantMulheres + quantCriancas);
	
	// Uma m�dia de cada 4 horas de churrasco uma pessoa bebe 5 latas.
	lataCerveja =  5 * ((quantHomens + quantMulheres) / 2) * (quantHoras / 2);	
	
	
	printf("\n Ter� %i pessoas no churrasco.", totPessoas);
	printf("\n Churrasco ter� dura��o de %i horas.", quantHoras);
	printf("\n ================================================");	
	
	printf("\n Ter� %.3f Kg de carne tipo picanha.", carnePicanha);
	printf("\n Ter� %.3f Kg de carne tipo contra file.", carneContra);
	printf("\n Ter� %.3f Kg de carne tipo maminha.", carneMaminha);
	printf("\n Ter� %.3f Kg de carne tipo asa de frango.", carneAsaFrango);
	printf("\n Ter� %.3f Kg de carne tipo fraldinha.", carneFraldinha);
	printf("\n ================================================");	
	
	printf("\n Ter� %.2f Kg de carv�o.", carvao);
	printf("\n ================================================");
	
	printf("\n Ter� %.3f Kg de lingui�a.", linguica);	
	printf("\n ================================================");
	
	printf("\n Ter� %i paes.", pao);	
	printf("\n ================================================");
	
	printf("\n Ter� %i pacotes de queijo contendo 270g por pacote.", pacoteQueijo);
	printf("\n ================================================");
	
	printf("\n Ter� %i latas de refrigerante contendo 350ml.", lataRefrigerante);
	printf("\n ================================================");
	
	printf("\n Ter� %i latas de cerveja cada uma contendo 350ml.", lataCerveja);
	printf("\n ================================================");	
	
	return 0;
}
