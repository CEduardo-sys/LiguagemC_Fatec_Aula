/*
	Tarefa 03 - Churrasco
	
	Instruções
	Faça um programa que receba:
	
	Quantidade de homens.
	Quantidade de mulheres.
	Quantidade de crianças.
	Quantidade de horas de duração de um churrasco.
	
	
	Calcular e mostrar uma lista de compra de 10 itens para um churrasco, considerando a quantidade de pessoas e a duração do churrasco.
	A lista de compras deverá constar:
	   - Quantidade de cada item (se for o caso, como quantidade de pão, latas de refrigerante, pacotes, etc..
	   - Quilos de cada item (se for o caso), como carne, linguiça, etc...
	
	A lista de compra deverá ter o total a ser comprado.
		
	// 1. Ler com atenção o enunciado do exercico!!!
	
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
		
	printf("Informe a quantidade de crianças: ");
	scanf("%i", &quantCriancas);
		
	printf("Informe a duração do churrasco em horas: ");
	scanf("%i", &quantHoras);
	
	
	// Total de Pessoas	
	totPessoas = quantHomens + quantMulheres + quantCriancas;
	
	
	// Itens por Quilos	
	carnePicanha = (quantHomens * 0.100) + (quantMulheres * 0.100) + (quantCriancas * 0.100) * (quantHoras / 2);	
	carneContra = (quantHomens * 0.100) + (quantMulheres * 0.050) + (quantCriancas * 0.100) * (quantHoras / 2);	
	carneMaminha = (quantHomens * 0.100) + (quantMulheres * 0.050) * (quantHoras / 2);	
	carneAsaFrango = (quantHomens * 0.100) + (quantMulheres * 0.050) * (quantHoras / 2);	
	carneFraldinha = (quantHomens * 0.100) + (quantMulheres * 0.050) * (quantHoras / 2);
	
	// carvão 3Kg a cada 3 a 4 horas.
	carvao =  quantHoras * 1;
	
	
	linguica = (quantHomens * 0.200) + (quantMulheres * 0.100) + (quantCriancas * 0.050) * (quantHoras / 2);
	
	
	// Quantidade de latas de refrigerantes
	lataRefrigerante = 3 * ((quantHomens + quantMulheres + quantCriancas) / 2) * (quantHoras / 2);	
	
	
	// Itens que contem a quantidade
	pao = 2 * (quantHomens + quantMulheres + quantCriancas);	
	pacoteQueijo = 1 * (quantHomens + quantMulheres + quantCriancas);
	
	// Uma média de cada 4 horas de churrasco uma pessoa bebe 5 latas.
	lataCerveja =  5 * ((quantHomens + quantMulheres) / 2) * (quantHoras / 2);	
	
	
	printf("\n Terá %i pessoas no churrasco.", totPessoas);
	printf("\n Churrasco terá duração de %i horas.", quantHoras);
	printf("\n ================================================");	
	
	printf("\n Terá %.3f Kg de carne tipo picanha.", carnePicanha);
	printf("\n Terá %.3f Kg de carne tipo contra file.", carneContra);
	printf("\n Terá %.3f Kg de carne tipo maminha.", carneMaminha);
	printf("\n Terá %.3f Kg de carne tipo asa de frango.", carneAsaFrango);
	printf("\n Terá %.3f Kg de carne tipo fraldinha.", carneFraldinha);
	printf("\n ================================================");	
	
	printf("\n Terá %.2f Kg de carvão.", carvao);
	printf("\n ================================================");
	
	printf("\n Terá %.3f Kg de linguiça.", linguica);	
	printf("\n ================================================");
	
	printf("\n Terá %i paes.", pao);	
	printf("\n ================================================");
	
	printf("\n Terá %i pacotes de queijo contendo 270g por pacote.", pacoteQueijo);
	printf("\n ================================================");
	
	printf("\n Terá %i latas de refrigerante contendo 350ml.", lataRefrigerante);
	printf("\n ================================================");
	
	printf("\n Terá %i latas de cerveja cada uma contendo 350ml.", lataCerveja);
	printf("\n ================================================");	
	
	return 0;
}
