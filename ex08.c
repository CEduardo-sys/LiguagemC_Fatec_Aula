/*
	Tarefa 02 - 8. A disciplina Algoritmos e Programa��o � dividida em duas partes: teoria e pr�tica.
Na teoria, s�o aplicadas duas provas (com nota de 0 a 10 cada).
Na pr�tica tamb�m vale a mesma f�rmula. As notas das duas partes se juntam no final do semestre para compor a nota do aluno
na disciplina, mas a teoria tem peso de 60%, enquanto a pr�tica tem peso de 40%. Receba as notas de um aluno em cada
prova te�rica e pr�tica e mostre a nota final do semestre dele na disciplina.
 
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
	float notaTeorica1, notaTeorica2, notaPratica1,notaPratica2, notaTeoricaTotal, 
	notaPraticaTotal, notaFinal;
	// Input
	printf("Informe a nota teroria1: ");
	scanf("%f", &notaTeorica1);
	
	printf("Informe a nota teorica2: ");
	scanf("%f", &notaTeorica2);
	
	printf("Informe a nota pratica1: ");
	scanf("%f", &notaPratica1);
	
	printf("Informe a nota pratica2: ");
	scanf("%f", &notaPratica2);
	
	//Calc
	notaTeoricaTotal = (notaTeorica1 + notaTeorica2) * 0.60;
	notaPraticaTotal = (notaPratica1 + notaPratica2) * 0.40; 
	notaFinal = notaTeoricaTotal + notaPraticaTotal;
	
	//Output
	printf("\nNota final � %.2f", notaFinal);
	
	return 0;	
}

