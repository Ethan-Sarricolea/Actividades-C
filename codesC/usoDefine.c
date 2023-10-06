// - Define es una directiva que asocia un identificador con una cadena de token
//  Obtenido de https://learn.microsoft.com/es-es/cpp/preprocessor/hash-define-directive-c-cpp?view=msvc-170

#include <stdio.h>
#define WIDTH 80
#define LENGTH (WIDTH+10)

int var;
int main()
{
    var = (LENGTH * 20);            // var = (80 + 10)*20
    printf("El resultado es: %d",var);
    return 0;
}