//TRACCIA
/*
	Dati due array 2D di tipo integer:
		-Tablet_Negozio di dimensione K,2
		-Tablet_Deposito di dimensione Y,2
	creare una procedura che restituisca un terzo array che contenga il totale dei due array
*/



//Librerie
#include<stdio.h>

//Function & Procedure
void tablet_totali(int A[][2],int B[][2],int C[][2],int k,int y,int *x);




//inizio
int main()
{

	//VAR
	int A[10][2];		// Tablet Negozio
	int B[10][2];		// Tablet Deposito
	int C[20][2];		// Tablet Totali
	int i,j;		// Indici
	int k,y;		// Totali dei due array
	int x;			// Grandezza effettiva array C

//BEGIN

	// Chiediamo grandezze array Negozio e Deposito
	printf("Inserisci quanti tablet ci sono in negozio \n");
	scanf("%d",&k);

	printf("Inserisci quanti tablet ci sono in deposito \n");
	scanf("%d",&y);


	
	// Carichiamo gli elementi nei due array
	// Array A Negozio
	printf("Array Negozio \n");
	for(i=0;i<k;i++)
	{
		for(j=0;j<2;j++)
		{
			if(j==0)
			{
				printf("Inserisci Codice Tablet:");
				scanf("%d",&A[i][j]);
				printf("\n");
			}
			else
			{
				printf("Inserisci Quantità Tablet:");
				scanf("%d",&A[i][j]);
				printf("\n");
			}

			
		}
	}


	// Array B Deposito
	printf("Array Deposito \n");
	for(i=0;i<y;i++)
	{
		for(j=0;j<2;j++)
		{
			if(j==0)
			{
				printf("Inserisci Codice Tablet:");
				scanf("%d",&B[i][j]);
				printf("\n");
			}
			else
			{
				printf("Inserisci Quantità Tablet:");
				scanf("%d",&B[i][j]);
				printf("\n");
			}

			
		}
	}

	// Richiamo procedura
	tablet_totali(A,B,C,k,y,&x);

	// Stampiamo array C con grandezza effettiva restituita tramite puntatore
	printf("Codice\tTotale\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}

return 0;
}//fine
