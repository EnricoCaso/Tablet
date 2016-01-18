/*
	1 - SCOPO
	2 - SPECIFICHE
	3 - LISTA PARAMETRI
	4 - INDICATORE DI ERRORE
	5 - PROCEDURE AUSILIARIE
	6 - RACCOMANDAZIONI DI USO
	7 - ESEMPIO DI USO
*/


/*Librerie*/
#include<stdio.h>

/*Function & Procedure*/




/*inizio*/
void tablet_totali(int A[][2],int B[][2],int C[][2],int k,int y,int *x)
{

	/*VAR*/
	int i,j,z;		// Indici array


//BEGIN

	// Inizializziamo gli indici
	i=0;
	j=0;
	z=0;

	// Ciclo while per il confronto dei codici
	// Si deve effettuare il merge tra i due array se si trovano codici uguali si sommano gli elementi della seconda colonna
	while( (i<k) && (j<y) )
	{
		// Se il codice tablet A è minore di B ricopio in C gli elementi di A
		if( A[i][0] < B[j][0] )
		{
			C[z][0]=A[i][0];
			C[z][1]=A[i][1];
			i+=1;
			z+=1;
		}
		else if ( A[i][0] > B[j][0] ) // Altrimenti Se A è maggiore di B ricopio in C gli elementi di B
		{
			C[z][0]=B[j][0];
			C[z][1]=B[j][1];
			j+=1;
			z+=1;
		}
		else if(A[i][0] == B[j][0])	// Se sono uguali sommo le seconde colonne
		{
			C[z][0]=A[i][0];
			C[z][1]=( A[i][1] + B[j][1] );
			j+=1;
			i+=1;
			z+=1;
		}


	}


	// Se finisce array A
	if(i==k)
	{
		for(i=j;i<y;i++)
		{
			C[z][0]=B[i][0];
			C[z][1]=B[i][1];
			z+=1;
		}
	}
	else if(j==y)
	{
		for(j=i;j<k;j++)
		{
			C[z][0]=A[i][0];
			C[z][1]=A[i][1];
			z+=1;
		}
	}

}/*fine*/
