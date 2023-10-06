// Mostrar la distancia a la luna en millas y kilometros

#include <stdio.h>
const int luna=238857;      //Distancia en millas
float lunaKilo;
int main()
{
    printf("Distancia a la luna %d millas\n",luna),
    lunaKilo = luna*1.609;
    printf("Distancia a la luna en kilometros: %fKm\n",lunaKilo);
    return 0;
}
