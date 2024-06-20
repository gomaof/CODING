/*
> CADEIA DE PONTEIROS
*/
#include <stdio.h>
#include <stdlib.h>

int main (){
    int var;
    int *point1;
    int **point2;
    int ***point3;

    var = 15;

    point1 = &var;
    point2 = &point1;
    point3 = &point2;

    printf("\n%d\n", ***point3);


    system("PAUSE");
    return 0;
}