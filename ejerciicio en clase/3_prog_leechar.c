/* emmanuel ramos cortes*/
/* ennwero@vgmail.com*/
/* 19 de abrir del 2018*/
/* leer char*/


const int tamanio = 5; /*definir una constante*/





#include <stdio.h>
 
	int main(void)
{
	char c;
char array[tamanio];
int index = 0;
while((c =getchar()) !='\n')
{
if(c>=97 && c<= 122)/* validando unicamente caracteres:letras minusculas*/
{
c= c-32;
array[index] = c;
index++;
}
}
printf("\n");
for(int i=0; i<tamanio; i++)
{
printf("%c", array[i]);
}
printf("\n");



return 0;
}


