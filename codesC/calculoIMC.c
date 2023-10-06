//Calcular el IMC
// Autor: Sarrciolea Cortés Ethan Yahel
#include <stdio.h>

float altura,imc;
int peso;

int main() {
    printf("Coloca tu altura(m):");
    scanf("%f",&altura);
    printf("Coloca tu peso(kg):");
    scanf("%i",&peso);
    imc = peso/(altura*altura);
    printf("%s %f %s","Tu imc es: ",imc,"\n");
    if (imc<=18.5) {
        printf("Te encuentras en bajo peso");
    } else if (imc>=18.5 && imc<=24.9){
        printf("Te encuentras en peso normal");
    } else if (imc>=25 && imc<=29.9) {
        printf("Te encuentras en sobrepeso");
    } else if (imc>=30 && imc<=34.9) {
        printf("Te encuentras en obesidad tipo I");
    } else if (imc>=35 && imc<=39.9) {
        printf("Te encuentras en obesidad tipo II");
    }else if (imc>=40) {
        printf("Te encuentras en obesidad tipo III");
    }
    return 0;
}