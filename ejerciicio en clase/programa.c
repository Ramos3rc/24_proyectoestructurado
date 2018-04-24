/* RAMOS CORTES EMMANUEL*/
/* ENNWERO@GMAIL.COM*/
/* 17 ABRIL 2018*/

#include <stdio.h>
#define TAM 5
int main(void)
{

	const int array[TAM];
	int array1[TAM] = {1,2,3,4,5};
	int array2[TAM] = {1,2,[0]=10,3,4,};
	int array3[] = {1,2,3,4,6};

	/* definir arreglos de caracteres */
	char char1[] = {'a','b','c'};
	char char2[] = {62,63,64,65,66};
	char char3[] = {0x63, 0x64, 0x65, 0x66};
printf("%C", char3[0]);
return 0;
}
