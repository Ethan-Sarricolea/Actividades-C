#include <stdio.h>

int num1,num2,resultado;

int suma(num1,num2)
{
    resultado=num1+num2;
    return resultado;
}

int main()
{
    printf("suma de 2 numeros enteros:\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    suma();
    printf("%d + %d = %d\n",num1,num2,suma);
    return 0;
}
