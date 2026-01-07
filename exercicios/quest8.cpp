#include<stdio.h>
#include<stdlib.h>

//Questão 08 da lista de algoritmos 1 - Exercícios de tomada de decição -  Computação Aplicada

//Escreva um programa em C para ler o número de lados de um polígono regular, e a medida do lado. 
//Calcular e imprimir o seguinte: 
//Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor do seu perímetro. 
//Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área.
//Se o número de lados for igual a 5 escrever PENTÁGONO. 
//Em qualquer outra situação escrever Polígono não identificado.

int TRI, QUAD, A, B, C, L;

int main()
{
	printf("\n Insira a quantidade de lados do poligono:");
	printf("\n");
	scanf("%d", &L);
	
	if(L==3)
	{
		printf("\n TRIANGULO. Insira os valores dos lados: ");
		scanf("%d %d %d", &A, &B, &C);
		TRI=A+B+C;
		printf("\n O perimetro deste triangulo eh: %d", TRI);
	}
	if (L==4)
	{
		printf("\n QUADRADO. Insira os valores dos lados:");
		scanf("%d %d", &A, &B);
		QUAD=A*B;
		printf("\n A area deste quadrado eh: %d.");
	}
	if(L==5)
	{
		printf("\n PENTAGONO. \n");
	}
	if(L<3 || L>5) 
	{
		printf("\n Poligono nao encontrado. \n");
	}
	printf("\n");
	system ("PAUSE");
	return 0;
	}
