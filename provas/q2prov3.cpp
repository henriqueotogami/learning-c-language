#include<stdio.h>
#include<stdlib.h>

//Henrique Matheus Alves Pereira R.A.: 84.86.961

float CT, M;   //CT= valor total gasto com Cigarros; M= Custo do maço
int AF, CD;		// AF= anos fumados; CD= cigarros fumados por dia

int main ()
{
	printf("\n Ola. Por favor, insira as seguintes informacoes para calcularmos quanto dinheiro ja foi gasto com cigarros. \n");
	printf("\n Digite ha quantos anos voce fuma: ");
	scanf("%d", &AF);
	printf("\n Quantos cigarros voce fuma por dia: ");
	scanf("%d", &CD);
	CD=CD*365;			//Quantidade de cigarros fumados em um ano
	printf("\n Quanto custa o maco (20 unidades) que voce costuma comprar: ");
	scanf("%f", &M);
	M=M/20; 		   //Divide-se o valor do maço para saber o valor da unidade
	CT=M*CD*AF;		   //multiplica-se o valor da unidade com a qtde de cigarros por ano, e depois com o total de anos fumados.
	printf("\n Voce ja gastou %g reais com cigarros. \n", CT);
	printf("\n");
	system("PAUSE");
	return 0;
}
