#include <stdio.h>
#define T "Tambor de hojalata."

/*
- Define es una directiva que asocia un identificador con una cadena de token
- st es un vector con 21 espacios/casilleros, !!! si se deja vacio 
toma una cantidad de espacios automaticamente
- puts muestra una cadena de texto y salta la linea
- & (ampersand) se usa pra indicar una direccion de memoria de la
variable donde se almacenara el dato
se omite cuando es un dato cadena o array
*/

int main()
{
    char st[21]="Todo puede hacerse";
    puts(T);
    puts("Permiso para salir en la foto.");
    puts(st);
    puts(&st[8]);
    return 0;
}