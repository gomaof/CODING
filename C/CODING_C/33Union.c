/*
> UNION
*/

#include <stdio.h>
#include <stdlib.h>

union estrutura1{ // vantagem union ocupa menos espaço na memoria que uma struct
    // posso fazer as mesmas coisas que struct desde modificar e chamar e tals

    int inteiro;
    char caractere;
    float decimal;

};

struct estrutura2{
    int inteiro2;
    char caractere2;
    float decimal2;
};



int main(){
    printf("Uniao: %d\n", sizeof(union estrutura1));
    printf("Struct: %d\n", sizeof(struct estrutura2));


    system("PAUSE");
    return 0;
}