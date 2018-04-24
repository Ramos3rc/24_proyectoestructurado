/*Ramos Coretes Emmanuel*/
/*ennwero1@gmail.com*/
/*24 de abril de 2018*/
/* */

#include <stdio.h>


/* definicion de constantes*/
#define row 5 /* definiendo numero de filas de la matriz*/
#define col  3 /* definir numero de columnas de la matriz*/
#define max 100 /* rango superior de los datos aleatorios*/



int miain(void)
{
	int array [row][col];

/*inicializar el array con valores enteros aleatorios 1- 100*/
	for(i=0;i<row; i++)
		{
		/*asognacion de datos array*/
		for(j=0;j<col;j++)/* ciclo que controla las columnas del array*/
		{
		/*asignacion de datos al array*/
		/*utilizar la funcion scanf para solicitar al usuario */


		/*utilizar  la funcion rand para obtener datos de forma aleatoria*/
		/*la funcion se encuentra definida dentro de la biblioteca stdlib.h*/
		array[i][j] = rand() % (max+1);	
		/* generar valores aleatorios de tipo floatanteentre 0 -1000*/
printf("{\n");
 for(i=0;i<row; i++)
                {
printf("{");
                /*asognacion de datos array*/
                for(j=0;j<col;j++)
{ printf("%d, ", array[i][j]);
}
printf("}·\n");
		}
printf("}ņ");
}

		printf("\x1b[32m datos aleatorios de la matriz: array[%d][%d]\n", row, col);
		printf("\x1b[32 otro mensaje\n");

return 0;
} 
