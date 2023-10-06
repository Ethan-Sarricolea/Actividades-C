//Pedir nombre y mostrarlo

#include <stdio.h>
char nombre[5];

int main(void)
{
    nombrePregunta();
    return 0;
}

void nombrePregunta()
{
    printf("coloca tu nombre\n");
    scanf("%s",&nombre);
    printf("Hola: %s",nombre);
}
