#include<stdio.h>
#include<stdlib.h>

float A1, A2, A3, AT;

int main()
{
	printf("\n Insira os valores dos angulos do triangulo: ");
	scanf("%f %f %f", &A1, &A2, &A3);
	AT=A1+A2+A3;
	printf("\n A soma dos lados do tringulo eh: %g \n", AT);
	if(AT<90.00)
	printf("\n Portanto, ele eh um Triangulo Acutangulo. \n");
	if(AT==90.00)
	printf("\n Portanto, ele eh um Triangulo Retangulo. \n");
	if(AT>90.00)
	printf("\n Portanto, ele eh um Triangulo Obtusangulo.\n");
	printf("\n");
	system("PAUSE");
	return 0;
}

