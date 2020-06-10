#include<stdio.h>
#include<stdlib.h>

//Escreva um programa em C que leia as medidas dos lados de um triângulo e, caso exista, escreva se ele é 
//EQUILÁTERO, ISÓSCELE ou ESCALENO 
//Observação:
//O triângulo existe se e somente a soma de dois lados quaisquer é maior que o lado remanescente.
//Triângulo equilátero: Possui os 3 lados iguais. 
//Triângulo isósceles: Possui os 2 lados iguais. 
//Triângulo escaleno: Possui os 2 lados diferentes. 

int A,B,C, AB, BC, AC;

int main()
{
	printf("\n Insira as medidas dos lados do poligono:");
	scanf("%d %d %d", &A, &B, &C);
	
	AB=A+B;
	BC=B+C;
	AC=A+C;
	
	if(AB>C && BC>A)
	{
		printf("\n Essas medidas pertencem a um triangulo verdadeiro.\n");
		
		if(A==B && B==C)
		{
			printf("\n Triangulo Equilatero. \n");
		}
		else if(A==B || C==B)
		{
			printf("\n Triangulo Isosceles. \n");
		 } 
		 else if(A==C)
		 {
		 	printf("\n Triangulo Isosceles. \n");
		 }
		 else printf("\n Triangulo Escaleno. \n");
	}	
		else printf("\n Essas medidas nao pertencem a um triangulo");
		printf("\n");
		system("PAUSE");
		return 0;
}
