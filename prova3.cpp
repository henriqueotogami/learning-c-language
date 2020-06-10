#include<stdlib.h>
#include<stdio.h>


const int MAX=100;

float a[MAX][MAX], b[MAX], a_exp[MAX][MAX], a_inv[MAX][MAX], mult[MAX][MAX], m, p, S, res[MAX];

int i, j, k, n;

int main()

{
	printf("Entre com a ordem da matriz: ");
	scanf("%d", &n);
	printf("Entre com os dados da matriz \n");
	
	for(i=0; i<n; i++);
	{
		for(j=0; j<n; j++)
		{
			scanf("%f", &a[i][j]);
			a_exp[i][j]=a[i][j];
			if(i==j)  a_exp[i][j+n]=1;
				else  a_exp[i][j+n]=0;
				
		}
	
	}
	
	printf("O vetor das constantes eh: \n");
	
	for(i=0; i<n; i++)
		scanf("%f", &b[i]);
		
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i!=j)
			{
				m = a_exp[j][i]/a_exp[i][i];
				for(k=0; k<2*n; k++)
						a_exp[j][k] = a_exp[j][k] -m * a_exp[i][k];
			}
		}
	}
	for(i=0; i<n; i++)
	{
		p = a_exp[i][i];
		for(j=0; j<2*n; j++)
			a_exp[i][j] = a_exp[i][j]/p;
	}
	
	//Recuperação da matriz inversa da matriz expandida
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			a_inv[i][j]= a_exp[i][j+n];
	}
	
	//cálculo da matriz resultado por multiplicação da matriz inversade a por b
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			S=0.0;
			for(k=0; k<1*n; k++ )
				S=S+a_inv[i][k]*b[k];
				res[i]=S;
		}		
	}
	
	printf("A matriz inversa eh: \n");
	for (i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			printf("%f \t", a_inv[i][j]);
		printf("\n");
	}
	
	printf("\n A solucao do sistema eh: \n");
	for(i=0; i<n; i++)
		printf("%f \t", res[i]);
	printf("\n");
	
	system("PAUSE");
	return 0;
}


