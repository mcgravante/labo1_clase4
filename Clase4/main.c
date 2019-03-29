#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
int numero;
int esito;

pruebita();
esito = utn_getNumber(&numero, 99, 0, 3, "Ingrese edad:", "\n ErRoR! Valor inválido\n");
if (esito==0)
{
   printf("%d",numero);
};

return 0;

}
