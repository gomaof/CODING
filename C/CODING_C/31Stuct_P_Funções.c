/*
> PASSANDO STRUCTS PARA FUNÇÕES

> 
*/

#include <stdio.h>
#include <stdlib.h>

/*    EXEMPLO FACIL E PRATICO
struct estrutura 1{
    int a;
    int b;
    char c;
    float d;
    char s[10];
}variavel;

int func1(&variavel.a);
int func2(&variavel.b);
char func3(&variavel.s[10]);   */


struct estrutura{
    int a, b;
    char c;
};

void imprimir(struct estrutura parametro){
    printf("%d\n", parametro.a);
}


int main(){

    struct estrutura argumento;
    argumento.a = 1200; //lembrando que é no main que inicia tudo para depois passar para o void

    imprimir(argumento);


    system("PAUSE");
    return 0;
}