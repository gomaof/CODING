#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int *ptr;
    ptr = (int *) malloc(sizeof (int));
    printf("Endereco: %p\nValor: %d\n\n", ptr, *ptr);

    *ptr = 42;
    printf("Endereco: %p\nValor: %d\n\n", ptr, *ptr);

    system("Pause");
    return(0);
}