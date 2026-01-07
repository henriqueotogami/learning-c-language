#include<stdio.h>
#include<stdlib.h>
 
//Questão 07 da lista de algoritmos 1 - Exercícios de tomada de decição -  Computação Aplicada

//Escreva um programa em C para ler 3 valores 
//(considere que não serão informados valores iguais) e escrever a soma dos 2 maiores. 

float A,B,C,SOMA;
 
int main()
{
printf ("\n Insira tres valores: ");
printf("\n");
scanf("%f %f %f", &A, &B, &C);
SOMA=0;
 
if(A>C && B>C)
{
SOMA=A+B;
printf ("\n Os dois primeiros numeros sao maiores que C. \n ");
printf ("\n O valor da soma eh: %g", SOMA);
printf ("\n");
}
 
if(B>A && C>A)
{
SOMA=B+C;
printf ("\n Os dois ultimos numeros sao maiores que A. \n ");
printf ("\n O valor da soma eh: %g", SOMA);
printf ("\n");
}
 
if(A>B && C>B)
{
SOMA=A+C;    
printf ("\n O primeiro e ultimo numeros sao maiores que B. \n ");
printf ("\n O valor da soma eh: %g", SOMA);
printf ("\n");
}

printf ("\n");
system ("PAUSE");
return 0;
}

