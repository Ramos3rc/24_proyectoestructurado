/*Emmanuel RAMOS cORTES*/
/*ennwero1@gmail.com*/
/* 23 de abril del 2018*/









const int tamanio = 5; /*definir una constante*/





#include <stdio.h>

        int main(void)
{
        char c;
char array[tamanio];
int index = 0;
while((c =getchar()) !='\n')
{
if(c>=65 && c<= 90)/* validando unicamente caracteres:letras minusculas*/
{
c= c+32;
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

