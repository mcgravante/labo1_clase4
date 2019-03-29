#include <stdio.h>
#include <stdlib.h>

void pruebita(void)
{
printf("hola mundo desde utn.c\n");
}

int utn_getNumber(int* puntero, int max, int min, int reintentos, char* msg, char* msgError)
{
int aux;
int retorno=-1;
while(reintentos>0){
printf("%s",msg);
if (scanf("%d",&aux)==1)
{
    if (aux>=min && aux<=max)
    {
        retorno=0;
        break;
    }
}
else {
    printf("%s",msgError);
reintentos--;
}
};

*puntero=aux;
return retorno;
}
