/*
> INDEXAÇÃO de PONTEIROS
*/
#include <stdio.h>
#include <stdlib.h>

int main (){
    int mat[10] = {1,2,3,4,5,6,7,8,9,10};
    int *point, i;

    point = mat;

    for ( i = 0; i < 10; i++) printf("%d\n", *(point+i));
    // sginifica que com isso estaremos apontando para cada endereço da matriz e vai incrementando cada valor dentro do loping


    system("PAUSE");
    return 0;
}