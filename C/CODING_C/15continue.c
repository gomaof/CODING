/*

> continue
 EX: 1
> imprimir os numeros pares de 0 a 100
> nesse caso o "IF" está comparando se x é divisivel por 2, se não sobrar nada ele apenas continuara pulando os impares

> int x;

    for ( x = 0; x <= 100 ; x++)
    {
        if ( x % 2) continue;


        printf("%d\n", x);
    }

 EX: 2
> continue
> maquina de codificação


*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


void codifica();

int main (){

    printf("Entrar com as letras para codificiar\n");
    printf("Digite $ para sair\n");
    codifica();


    system("PAUSE");
    return 0;
}

void codifica(){
    char ok = 0, ch;

    while(!ok){
        ch = getche();
        if(ch == '$'){
            ok = 1;
            continue;
        }
        printf("%c", ch + 1);
    }
}